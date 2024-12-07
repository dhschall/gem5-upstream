#include "cpu/pred/tage_scl.hh"

#include "base/intmath.hh"
#include "base/logging.hh"
#include "base/random.hh"
#include "base/trace.hh"
#include "debug/Fetch.hh"
#include "debug/Tage.hh"

namespace gem5
{

namespace branch_prediction
{

TAGE_SCL::TAGE_SCL(const TAGE_SCLParams &params) : BPredUnit(params), tage(1024, params.takenOnlyHistory)
{
}

// PREDICTOR UPDATE
void
TAGE_SCL::update(ThreadID tid, Addr pc, bool taken, void * &bp_history,
              bool squashed, const StaticInstPtr & inst, Addr target)
{
    TageSclBranchInfo *bi = static_cast<TageSclBranchInfo*>(bp_history);

    DPRINTF(Tage, "TAGE id:%d update: %lx squashed:%s bp_history:%p\n", bi ? bi->id : -1, pc, squashed, bp_history);

    assert(bp_history);
    if (squashed) {
        // This restores the global history, then update it
        // and recomputes the folded histories.
        tage.flush_branch_and_repair_state(bi->id, pc, bi->br_type, taken, target);
        return;
    }

    tage.commit_state(bi->id, pc, bi->br_type, taken);
    tage.commit_state_at_retire(bi->id, pc, bi->br_type, taken, target);
    delete bi;
    bp_history = nullptr;
}

void
TAGE_SCL::squash(ThreadID tid, void * &bp_history)
{
    TageSclBranchInfo *bi = static_cast<TageSclBranchInfo*>(bp_history);
    DPRINTF(Tage, "TAGE id: %d squash: %lx bp_history:%p\n", bi ? bi->id : -1,
        bi? bi->pc : 0x00, bp_history);
    if (bi) {
      tage.flush_branch(bi->id);
    }
    delete bi;
    bp_history = nullptr;
}

bool
TAGE_SCL::predict(ThreadID tid, Addr pc, bool cond_branch, void* &b)
{
    uint64_t id = tage.get_new_branch_id();
    TageSclBranchInfo *bi = new TageSclBranchInfo();
    b = (void*)(bi);
    DPRINTF(Tage, "TAGE id: %d predict: %lx bp_history:%p\n", id, pc, b);
    bi->id = id;
    bi->pc = pc;
    bi->br_type.is_conditional = cond_branch;
    bi->br_type.is_indirect = false;
    return tage.get_prediction(id, pc);
}

void
TAGE_SCL::branchPlaceholder(ThreadID tid, Addr pc, bool uncond, void *&b)
{
    // this id is dummy, so we use previous id for later squash in FDP context.
    uint64_t id = tage.get_new_branch_id();
    TageSclBranchInfo *bi = new TageSclBranchInfo();
    DPRINTF(Tage, "branchPlaceholder, TAGE id: %d predict: %lx bp_history:%p\n", id, pc, b);
    bi->id = id;
    if(id == 128){
        std::cout << "128 bpholder" << std::endl;
    }
    bi->pc = pc;
    bi->br_type.is_conditional = !uncond;
    bi->br_type.is_indirect = false;
    tage.get_prediction(id, pc);
    tage.fakeCheckpoint(id);
    b = (void*)(bi);
}

bool
TAGE_SCL::lookup(ThreadID tid, Addr pc, void* &bp_history)
{
    DPRINTF(Tage, "TAGE lookup: %lx %p\n", pc, bp_history);
    bool retval = predict(tid, pc, true, bp_history);

    DPRINTF(Tage, "Lookup branch: %lx; predict:%d; bp_history:%p\n", pc, retval, bp_history);

    return retval;
}

void
TAGE_SCL::updateHistories(ThreadID tid, Addr pc, bool uncond,
                         bool taken, Addr target, const StaticInstPtr &inst,  void * &bp_history)
{
    TageSclBranchInfo *bi = static_cast<TageSclBranchInfo*>(bp_history);

    DPRINTF(Tage, "TAGE id: %d updateHistories: %lx %p\n", bi ? bi->id : -1, pc, bp_history);

    assert(uncond || bp_history);
    if (uncond) {
        DPRINTF(Tage, "UnConditionalBranch: %lx\n", pc);
        predict(tid, pc, false, bp_history);
    }
    //bi->br_type.is_conditional = !uncond;

    bi = static_cast<TageSclBranchInfo*>(bp_history);
    // Update the global history for all branches
    tage.update_speculative_state(bi->id, pc, bi->br_type, taken, target);
}

} // namespace branch_prediction

} // namespace gem5
