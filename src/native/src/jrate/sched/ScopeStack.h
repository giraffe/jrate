#ifndef _JRATE_SCHED_SCOPE_STACK_H_
#define _JRATE_SCHED_SCOPE_STACK_H_

#include <jrate/sched/TSS.h>

extern "C++" {
    namespace jrate {
        namespace sys {
            template <typename T> T& getTSS();
        }
    }
}

namespace jrate { namespace sched {


/**
 * This class implements a scope stack, which maintains the stack of
 * memory areas entered by a thread. This scope stack implementation
 * maintain the invatiant that the stack is never empty, since it is
 * constructed by passing always a memory area that could be either
 * the primordial scope or a scoped memory.
 */
template <typename MemoryArea, unsigned int N>
class ScopeStack {

private:
    typedef int index_t;
    enum { EMPTY = -1, FULL = N };
    typedef struct {
        MemoryArea* ma;
        index_t prevSM;
    } ScopeStackItem_t;

public:

    /**
     * Construct a scope stack by duplicating it from the give one.
     *
     * @param ss the scope stack that will be used to initialize this
     * scope stack.
     */
    ScopeStack(const ScopeStack& ss) : top_(-1), topScopedMem_(-1), initialMAIndex_(0) {
        *this = ss;
    }

    /**
     * Constructs the scope stack with a given initial memory.
     *
     * @param ma the initial memory area.
     */
    ScopeStack(MemoryArea* ma) : top_(-1), topScopedMem_(-1), initialMAIndex_ (0){
        ssi_[++top_].ma = ma;
        ssi_[top_].prevSM = EMPTY;
        if (ma->typeID() & jrate::mem::SCOPED_MEMORY) {
            topScopedMem_ = top_;
            ma->incRefCount();
        }
    }

    /**
     * Finalize the scope stack.
     */
    ~ScopeStack() {
        while (topScopedMem_ != EMPTY) {
            ssi_[topScopedMem_].ma->decRefCount();
            // assert(topScopedMem_ != ssi_[topScopedMem_].prevSM);
            topScopedMem_ = ssi_[topScopedMem_].prevSM;
        }
    }

public:
    ScopeStack* createExecuteInAreaScopeStack(MemoryArea* ma) {
        MemoryArea* top = this->top();
        ScopeStack* dupSS = 0;
        if (ma->checkReferenceFrom(top)) {
            dupSS = new ScopeStack();
            int i = -1;
            do {
                ++i;
                dupSS->ssi_[i] = ssi_[i];
                if(ssi_[i].ma->typeID() & jrate::mem::SCOPED_MEMORY)
                  ssi_[i].ma->incRefCount();
            } while (ssi_[i].ma != ma);

            dupSS->top_ = i;
            dupSS->initialMAIndex_ = i;

            if (ma->typeID() & jrate::mem::SCOPED_MEMORY)
                dupSS->topScopedMem_ = i;
            else
                dupSS->topScopedMem_ = ssi_[i].prevSM;
        }
        return dupSS;
    }

public:
    const ScopeStack& operator=(const ScopeStack& ss) {
        /* ?? -- decr old scopes ?? */
        // assert(topScopedMem_ == EMPTY);

        if (&ss != this) {
            top_ = ss.top_;
            topScopedMem_ = ss.topScopedMem_;
            initialMAIndex_ = ss.top_ + 1;
            for (index_t i = 0; i <= top_; ++i) {
                ssi_[i] = ss.ssi_[i];
                if(ssi_[i].ma->typeID() & jrate::mem::SCOPED_MEMORY)
                    ssi_[i].ma->incRefCount();
            }
        }
        return *this;
    }

public:
    /**
     * Pushes the memory area on the scope stack.
     *
     * @param ma the memory area to be pushed.
     *
     * @return returns true if the push succeeded, false if not. The
     * case in which the push does not succeed is due to the single
     * parent violation.
     */
    bool push(MemoryArea* ma) {
        // Notice that we keep the invariant (ssi_[0].ma==primordial)
        MemoryArea* parent = ssi_[0].ma;
        bool retVal = false;

        if (topScopedMem_ != EMPTY)
            parent = ssi_[topScopedMem_].ma;

        if (ma->getParent() == 0 || ma->getParent() == parent) {
            ssi_[++top_].ma = ma;
            ssi_[top_].prevSM = topScopedMem_;
            if (ma->typeID() & jrate::mem::SCOPED_MEMORY) {
                ma->setParent(parent);
                ma->incRefCount();
                topScopedMem_ = top_;
            }
            ::jrate::sys::getTSS< jrate::sched::TSS<MemoryArea> >().set(ssi_[top_].ma);
            retVal = true;
        }

        return retVal;
    }

    /**
     * Pops the top memory area off the stack.
     *
     * @return the popped memory area, or null if the stack is empty.
     */
    MemoryArea* pop() {
        MemoryArea* ma = 0;
        if (top_ != EMPTY) {
            ma = ssi_[top_].ma;

            if (ma->typeID() & jrate::mem::SCOPED_MEMORY) {
                ma->decRefCount();
                topScopedMem_ =  ssi_[top_].prevSM;
            }
            top_--;
            ::jrate::sys::getTSS< jrate::sched::TSS<MemoryArea> >().set(ssi_[top_].ma);
        }
        return ma;
    }

    /**
     * Sets the top for the curren scope stack. This operation is
     * similar to a push with the only difference that it does not
     * change the TSS for the current thread.
     *
     * @return true if the single parent rule was not violated by this operation
     */
    bool setTopMemoryArea(MemoryArea* ma) {
        // -- Precondition: ma != null --
        // Notice that we keep the invariant (ssi_[0].ma==primordial)
        MemoryArea* parent = ssi_[0].ma;
        bool retVal = false;

        if (topScopedMem_ != EMPTY)
            parent = ssi_[topScopedMem_].ma;

        if (ma->getParent() == 0 || ma->getParent() == parent) {
            ssi_[++top_].ma = ma;
            ssi_[top_].prevSM = topScopedMem_;
            if (ma->typeID() & jrate::mem::SCOPED_MEMORY) {
                ma->setParent(parent);
                ma->incRefCount();
                topScopedMem_ = top_;
            }
            retVal = true;
        }
        return retVal;
    }

    /**
     * Returns the dept of the stack, meaning the number of memory
     * areas that are currently pushed on it.
     *
     * @return the depth of the scope stack.
     */
    index_t depth() { return (top_ + 1); }

    MemoryArea* getMemoryAreaAt(index_t i) {
        return ssi_[i].ma;
    }

    MemoryArea* getOuterMemoryArea(index_t i) {
        if (i <= top_)
            return ssi_[top_-i].ma;
        else
            return 0;
    }

    /**
     * Returns the initial memory area.
     */
    index_t getInitialMAIndex() { return initialMAIndex_; }

    MemoryArea* top() {
        return (top_ != EMPTY) ? (ssi_[top_].ma) : 0;
    }


public:
    void initTSS() {
        jrate::sched::TSS<MemoryArea>& tss =
            ::jrate::sys::getTSS< jrate::sched::TSS<MemoryArea> >();
        tss.set(ssi_[top_].ma);
    }

private:
    ScopeStack() : top_(-1), topScopedMem_(-1), initialMAIndex_(0) { }

private:
    ScopeStackItem_t ssi_[N];
    index_t top_;
    index_t topScopedMem_;
    index_t initialMAIndex_;
};

} /* jrate */ } /* sched */

#endif // _JRATE_SCHED_SCOPE_STACK_H_
