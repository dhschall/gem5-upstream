/* Copyright 2020 HPS/SAFARI Research Groups
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef SPEC_TAGE_SC_L_TAGESCL_HPP_
#define SPEC_TAGE_SC_L_TAGESCL_HPP_

#include "statistical_corrector.hpp"
#include "tage.hpp"
#include "tagescl_configs.hpp"
#include "utils.hpp"

namespace tagescl {

extern uint64_t gid;
struct TageSclBranchInfo
{
    uint64_t pc;
    tagescl::Branch_Type br_type;
    tagescl::Tage_Prediction_Info<typename tagescl::CONFIG_64KB::TAGE> tage;
    tagescl::Loop_Prediction_Info<typename tagescl::CONFIG_64KB::LOOP> loop;
    tagescl::SC_Prediction_Info sc;
    //?
    uint64_t id;
    uint64_t br_pc;
    int rng_seed;
    bool tage_or_loop_prediction;
    bool final_prediction;
    bool updated_history;
    bool valid;
    TageSclBranchInfo()
    {
        tagescl::Tage<typename tagescl::CONFIG_64KB::TAGE>::build_empty_prediction(&tage);
        tagescl::Loop_Predictor<typename tagescl::CONFIG_64KB::LOOP>::build_empty_prediction(&loop);
        updated_history = false;
        id = gid;
            std::cout << "id = " <<id << std::endl;
        gid++;
        valid = true;
    }
};


class Tage_SC_L_Base {
 public:
  virtual bool get_prediction(TageSclBranchInfo& prediction_info, uint64_t br_pc) = 0;
  virtual void update_speculative_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                        Branch_Type br_type, bool branch_dir,
                                        uint64_t br_target) = 0;
  virtual void commit_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                            Branch_Type br_type, bool resolve_dir) = 0;
  virtual void commit_state_at_retire(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                      Branch_Type br_type, bool resolve_dir,
                                      uint64_t br_target) = 0;
  virtual void retire_non_branch_ip(TageSclBranchInfo& prediction_info) = 0;
  virtual void flush_branch(TageSclBranchInfo& prediction_info) = 0;
  virtual void flush_branch_and_repair_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                             Branch_Type br_type,
                                             bool resolve_dir,
                                             uint64_t br_target) = 0;
};

/* Interface functions:
 *
 * warmup() a wrapper for updating predictor state during the warmup phase of a
 * simulation.
 *
 * predict_and_update() a wrapper for consecutive simultaneous prediction and
 * update that implement the idealistic algorithms without considering pipeline
 * requirements. (same as Championship Branch Prediction Interface)
 */
template <class CONFIG>
class Tage_SC_L : public Tage_SC_L_Base {
 public:
  Tage_SC_L(int max_in_flight_branches, bool takenOnlyHist)
      : tage_(random_number_gen_, max_in_flight_branches, takenOnlyHist),
        statistical_corrector_(),
        loop_predictor_(random_number_gen_),
        loop_predictor_beneficial_(-1) 
        {}


  // It uses the speculative state of the predictor to generate a prediction.
  // Should be called before update_speculative_state.
  bool get_prediction(TageSclBranchInfo& prediction_info, uint64_t br_pc) override;

  // It updates the speculative state (e.g. to insert history bits in Tage's
  // global history register). For conditional branches, it should be called
  // after get_prediction() in the front-end of a pipeline. For unconditional
  // branches, it should be the only function called in the front-end.
  void update_speculative_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                Branch_Type br_type, bool branch_dir,
                                uint64_t br_target) override;

  // Invokes the default update algorithm for updating the predictor state.
  // Can
  // be called either at the end of execute or retire. Note that even though
  // updating at the end of execute is speculative, committing the state
  // cannot
  // be undone.
  void commit_state(TageSclBranchInfo& prediction_info, uint64_t br_pc, Branch_Type br_type,
                    bool resolve_dir) override;

  // Updates predictor states that are critical for algorithm correctness.
  // Thus, should always be called in the retire state and after
  // commit_state()
  // is called. branch_id is invalidated and should not be used anymore.
  void commit_state_at_retire(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                              Branch_Type br_type, bool resolve_dir,
                              uint64_t br_target) override;

  // Removes a non-branch instruction from the system. Invalidates branch_id.
  // Should be called directly after get_new_branch_id().
  void retire_non_branch_ip(TageSclBranchInfo& prediction_info) override;

  // Flushes the branch and all branches that came after it
  // and repairs the speculative state of the predictor.
  // It invalidates the branch id of all branches after the flushed branch
  // (including the flushed branch).
  void flush_branch(TageSclBranchInfo& prediction_info) override;

  // Flushes the branch and all branches that came after it
  // and repairs the speculative state of the predictor.
  // It invalidates the branch ids of all branches
  // strictly after the flushed branch.
  void flush_branch_and_repair_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                     Branch_Type br_type, bool resolve_dir,
                                     uint64_t br_target) override;

 private:
  Random_Number_Generator random_number_gen_;
  Tage<typename CONFIG::TAGE> tage_;
  Statistical_Corrector<CONFIG> statistical_corrector_;
  Loop_Predictor<typename CONFIG::LOOP> loop_predictor_;

  // Counter for choosing between Tage and Loop Predictor.
  Saturating_Counter<CONFIG::CONFIDENCE_COUNTER_WIDTH, true>
      loop_predictor_beneficial_;

};

template <class CONFIG>
bool Tage_SC_L<CONFIG>::get_prediction(TageSclBranchInfo& prediction_info, uint64_t br_pc) {

  // First, use Tage to make a prediction.
  tage_.get_prediction(br_pc, &prediction_info.tage);
  prediction_info.tage_or_loop_prediction = prediction_info.tage.prediction;

  if (CONFIG::USE_LOOP_PREDICTOR) {
    // Then, look up the loop predictor and override Tage's prediction if
    // the loop predictor is found to be beneficial.
    loop_predictor_.get_prediction(br_pc, &prediction_info.loop);
    if (loop_predictor_beneficial_.get() >= 0 && prediction_info.loop.valid) {
      prediction_info.tage_or_loop_prediction = prediction_info.loop.prediction;
    }
  }

  if (!CONFIG::USE_SC) {
    prediction_info.final_prediction = prediction_info.tage_or_loop_prediction;
  } else {
    statistical_corrector_.get_prediction(
        br_pc, prediction_info.tage, prediction_info.tage_or_loop_prediction,
        &prediction_info.sc);
    prediction_info.final_prediction = prediction_info.sc.prediction;
  }
  return prediction_info.final_prediction;
}

template <class CONFIG>
void Tage_SC_L<CONFIG>::commit_state(TageSclBranchInfo& prediction_info, uint64_t br_pc,
                                     Branch_Type br_type, bool resolve_dir) {
  if (!br_type.is_conditional) {
    return;
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.commit_state(
        br_pc, resolve_dir, prediction_info.tage, prediction_info.sc,
        prediction_info.tage_or_loop_prediction);
  }

  if (CONFIG::USE_LOOP_PREDICTOR) {
    if (prediction_info.loop.valid) {
      if (prediction_info.final_prediction != prediction_info.loop.prediction) {
        loop_predictor_beneficial_.update(resolve_dir ==
                                          prediction_info.loop.prediction);
      }
    }
    loop_predictor_.commit_state(
        br_pc, resolve_dir, prediction_info.loop,
        prediction_info.final_prediction != resolve_dir,
        prediction_info.tage.prediction);
  }

  tage_.commit_state(br_pc, resolve_dir, prediction_info.tage,
                     prediction_info.final_prediction);
}

template <class CONFIG>
void Tage_SC_L<CONFIG>::flush_branch_and_repair_state(TageSclBranchInfo& prediction_info,
                                                      uint64_t br_pc,
                                                      Branch_Type br_type,
                                                      bool resolve_dir,
                                                      uint64_t br_target
                                                      ) {
  //if(prediction_info_buffer_.already_squash(branch_id)){
  //    return;
  //}
      
  // First iterate over all flushed branches from youngest to oldest and call
  // local recovery functions.
  std::cout << "flush_branch_and_repair id= " << prediction_info.id << std::endl;
  tage_.local_recover_speculative_state(prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.local_recover_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.local_recover_speculative_state(
        prediction_info.br_pc, prediction_info.sc);
  }

  // Now call global recovery functions.
  tage_.global_recover_speculative_state(prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.global_recover_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.global_recover_speculative_state(prediction_info.sc);
  }

  random_number_gen_.seed_ = prediction_info.rng_seed;

  // Finally, update the speculative histories again using the resolved
  // direction of the branch.
  tage_.update_speculative_state(br_pc, br_target, br_type, resolve_dir,
                                 &prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.update_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.update_speculative_state(
        br_pc, resolve_dir, br_target, br_type, &prediction_info.sc);
  }

}

template <class CONFIG>
void Tage_SC_L<CONFIG>::flush_branch(TageSclBranchInfo& prediction_info) {
   //decoupled frnot-end
  //if(prediction_info_buffer_.already_squash(branch_id)){
  //    return;
  //}
  // First iterate over all flushed branches from youngest to oldest and
  // call local recovery functions.
  std::cout << "flush_branch id= " << prediction_info.id << std::endl;
  if(prediction_info.id == 25){
     std::cout << "flush_branch id = " << prediction_info.id << std::endl;
  }
  tage_.local_recover_speculative_state(prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.local_recover_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.local_recover_speculative_state(
        prediction_info.br_pc, prediction_info.sc);
  }


  // Now call global recovery functions.
  tage_.global_recover_speculative_state(prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.global_recover_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.global_recover_speculative_state(prediction_info.sc);
  }

  random_number_gen_.seed_ = prediction_info.rng_seed;

}

template <class CONFIG>
void Tage_SC_L<CONFIG>::commit_state_at_retire(TageSclBranchInfo& prediction_info,
                                               uint64_t br_pc,
                                               Branch_Type br_type,
                                               bool resolve_dir,
                                               uint64_t br_target) {
  std::cout << "commit_state_at_retire id= " << prediction_info.id << std::endl;
  if (prediction_info.updated_history) {
    if (CONFIG::USE_LOOP_PREDICTOR) {
      loop_predictor_.commit_state_at_retire(
        br_pc, resolve_dir, prediction_info.loop,
        prediction_info.final_prediction != resolve_dir,
        prediction_info.tage.prediction);
    }
    tage_.commit_state_at_retire(prediction_info.tage);
    if (CONFIG::USE_SC) {
      statistical_corrector_.commit_state_at_retire();
    }
  }
}

template <class CONFIG>
void Tage_SC_L<CONFIG>::retire_non_branch_ip(TageSclBranchInfo& prediction_info) {
  // std::cerr << "retire_non_branch_ip(" << branch_id << ")\n";
  assert(2 < 3);
}

template <class CONFIG>
void Tage_SC_L<CONFIG>::update_speculative_state(TageSclBranchInfo& prediction_info,
                                                 uint64_t br_pc,
                                                 Branch_Type br_type,
                                                 bool branch_dir,
                                                 uint64_t br_target) {
  prediction_info.rng_seed = random_number_gen_.seed_;
  prediction_info.updated_history = true;
  std::cout << "update_speculative_state id= " << prediction_info.id << std::endl;
  tage_.update_speculative_state(br_pc, br_target, br_type, branch_dir,
                                 &prediction_info.tage);
  if (CONFIG::USE_LOOP_PREDICTOR) {
    loop_predictor_.update_speculative_state(prediction_info.loop);
  }
  if (CONFIG::USE_SC) {
    statistical_corrector_.update_speculative_state(
        br_pc, branch_dir, br_target, br_type, &prediction_info.sc);
  }
  prediction_info.br_pc = br_pc;
}

}  // namespace tagescl

#endif  // SPEC_TAGE_SC_L_TAGESCL_HPP_
