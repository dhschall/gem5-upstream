#ifndef __CPU_PRED_TAGE_SCL_HH__
#define __CPU_PRED_TAGE_SCL_HH__

#include <vector>

#include "base/types.hh"
#include "cpu/pred/bpred_unit.hh"
#include "cpu/pred/tage_base.hh"
#include "params/TAGE_SCL.hh"
#include "cpu/pred/tagescl/tagescl.hpp"

namespace gem5
{

namespace branch_prediction
{

class TAGE_SCL: public BPredUnit
{
  private:
    tagescl::Tage_SC_L<tagescl::CONFIG_64KB> tage;

  protected:
    virtual bool predict(ThreadID tid, Addr branch_pc, bool cond_branch,
                         void* &b);

    struct TageSclBranchInfo
    {
        uint32_t id;
        Addr pc;
        tagescl::Branch_Type br_type;
        TageSclBranchInfo()
        {}
    };

  public:

    TAGE_SCL(const TAGE_SCLParams &params);

    // Base class methods.
    bool lookup(ThreadID tid, Addr pc, void* &bp_history) override;
    void updateHistories(ThreadID tid, Addr pc, bool uncond, bool taken,
                         Addr target, const StaticInstPtr &inst,  void * &bp_history) override;
    void update(ThreadID tid, Addr pc, bool taken,
                void * &bp_history, bool squashed,
                const StaticInstPtr & inst, Addr target) override;
    virtual void squash(ThreadID tid, void * &bp_history) override;
    void branchPlaceholder(ThreadID tid, Addr pc, bool uncond, void* &bpHistory) override;
};

} // namespace branch_prediction

} // namespace gem5

#endif // __CPU_PRED_TAGE_SCL_HH__
