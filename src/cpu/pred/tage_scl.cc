#include "cpu/pred/tage_scl.hh"

#include "base/intmath.hh"
#include "base/logging.hh"
#include "base/random.hh"
#include "base/trace.hh"
#include "debug/Fetch.hh"
#include "debug/Tage.hh"
uint64_t tagescl::gid = 0;
using tagescl::TageSclBranchInfo;
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

    DPRINTF(Tage, "TAGE update: %lx squashed:%s bp_history:%p\n", pc, squashed, bp_history);

    if(!bi->valid){
        //recorded when the placeholder was created
        bool is_conditional = bi->br_type.is_conditional;
        delete bi;
        //regenerate the bi; change it from placeholder to a valid bi
        predict(tid, pc, is_conditional, bp_history);
        bi = static_cast<TageSclBranchInfo*>(bp_history);
        tage.update_speculative_state(*bi, pc, bi->br_type, taken, target);
    }
    assert(bp_history);
    if (squashed) {
        // This restores the global history, then update it
        // and recomputes the folded histories.
        tage.flush_branch_and_repair_state(*bi, pc, bi->br_type, taken, target);
        return;
    }

    tage.commit_state(*bi, pc, bi->br_type, taken);
    tage.commit_state_at_retire(*bi, pc, bi->br_type, taken, target);
    delete bi;
    bp_history = nullptr;
}

void
TAGE_SCL::squash(ThreadID tid, void * &bp_history)
{
    TageSclBranchInfo *bi = static_cast<TageSclBranchInfo*>(bp_history);
    DPRINTF(Tage, "TAGE squash: %lx bp_history:%p\n",
        bi? bi->pc : 0x00, bp_history);
    //if bi is not valid, it's a branchPlaceholder
    if (bi && bi->valid) {
      tage.flush_branch(*bi);
    }
    delete bi;
    bp_history = nullptr;
}

bool
TAGE_SCL::predict(ThreadID tid, Addr pc, bool cond_branch, void* &b)
{
    TageSclBranchInfo *bi = new TageSclBranchInfo();
    b = (void*)(bi);
    DPRINTF(Tage, "TAGE predict: %lx bp_history:%p\n", pc, b);
    std::cout << "predict id= " << bi->id << std::endl;
    bi->pc = pc;
    bi->br_type.is_conditional = cond_branch;
    bi->br_type.is_indirect = false;
    return tage.get_prediction(*bi, pc);
}

void
TAGE_SCL::branchPlaceholder(ThreadID tid, Addr pc, bool uncond, void *&b)
{
    // this id is dummy, so we use previous id for later squash in FDP context.
    TageSclBranchInfo *bi = new TageSclBranchInfo();
    DPRINTF(Tage, "branchPlaceholder, branch pc: %lx bp_history:%p\n",  pc, b);
    //invalid since it is now a placeholder
    bi->valid = false;
    std::cout << "branchplaceholder id: " << bi->id << std::endl;
    bi->pc = pc;
    bi->br_type.is_conditional = !uncond;
    bi->br_type.is_indirect = false;
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

    DPRINTF(Tage, "TAGE updateHistories: %lx %p\n", pc, bp_history);

    assert(uncond || bp_history);
    if (uncond) {
        DPRINTF(Tage, "UnConditionalBranch: %lx\n", pc);
        predict(tid, pc, false, bp_history);
    }

    bi = static_cast<TageSclBranchInfo*>(bp_history);
    //bi->br_type.is_conditional = !uncond;

    // Update the global history for all branches
    tage.update_speculative_state(*bi, pc, bi->br_type, taken, target);
}

} // namespace branch_prediction

} // namespace gem5
