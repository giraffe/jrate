#ifndef _JRATE_SYNCH_ATOMIC_COUNTER_H_
#define _JRATE_SYNCH_ATOMIC_COUNTER_H_

#include "jrate/synch/Atomic.h"
#include "jrate/synch/Mutex.h"

namespace jrate { namespace synch {

class AtomicCounter {
public:
    AtomicCounter(int count = 0) {
        atomic_set(&counter_, count);
    }

    ~AtomicCounter() { }

public:

    /**
     * Atomically increments the counter.
     */
    inline const AtomicCounter& operator++() {
        atomic_inc(&counter_);
        return *this;
    }

    /**
     * Atomically increments the counter.
     */
    inline const AtomicCounter& operator++(int) {
        atomic_inc(&counter_);
        return *this;
    }

    /**
     * Atomically decrements the counter.
     */
    inline const AtomicCounter& operator--() {
        atomic_dec(&counter_);
        return *this;
    }

    /**
     * Atomically decrements the counter.
     */
    inline const AtomicCounter& operator--(int) {
        atomic_dec(&counter_);
        return *this;
    }

    inline bool operator==(int x) {
        return atomic_read(&counter_) == x;
    }

    /**
     * Atomically decrements the counter by 1 and returns true if the
     * result is 0, or false for all other cases.
     */
    inline bool decAndTest() {
        return atomic_dec_and_test(&counter_);
    }


   /**
    * Atomically increments the counter by 1 and returns true if the
    * result is zero, or false for all other cases.
    */
    inline bool incAndTest() {
        return atomic_inc_and_test(&counter_);
    }

    /**
    * Atomically increments the counter by 1 and returns true if the
    * result is one, or false for all other cases.
    */
    inline bool incAndTestOne() {
        return atomic_inc_and_test_one(&counter_);
    }

    /**
     * Atomically reads the value of the counter and increments it by one.
     */
    inline int getAndInc() {
        int count;
        mutex_.acquire();
        count = this->count();
        this->operator++();
        mutex_.release();
        return count;
    }

    /**
     * Atomically reads the value of the counter and increments it by one.
     */
    inline int getAndDec() {
        int count;
        mutex_.acquire();
        count = this->count();
        this->operator--();
        mutex_.release();
        return count;
    }

    /**
     * Gets the count and then clears the counter.
     */
    inline int getAndClear() {
                int count;
        mutex_.acquire();
        count = this->count();
        atomic_set(&counter_, 0);
        mutex_.release();
        return count;
    }

    inline int count() { return atomic_read(&counter_); }

private:
    atomic_t counter_;
    jrate::synch::Mutex<jrate::synch::FAST> mutex_;
};

} /* jrate */ } /* synch */

#endif // _JRATE_SYNCH_ATOMIC_COUNTER_H_
