// ************************************************************************
//    $Id: EventVariable.h 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
//
//                                jRate
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cse.wustl.edu>
//                          All Rights Reserved.
//
//   Permission to use, copy, modify, and distribute this software and
//   its  documentation for any purpose is hereby  granted without fee,
//   provided that the above copyright notice appear in all copies and
//   that both that copyright notice and this permission notice appear
//   in  supporting  documentation. I don't make  any  representations
//   about the  suitability  of this  software for any  purpose. It is
//   provided "as is" without express or implied warranty.
//
//
// *************************************************************************
//
// *************************************************************************
#ifndef _JRATE_SYNCH_EVENT_VARIABLE_H_
#define _JRATE_SYNCH_EVENT_VARIABLE_H_

#include "jrate/synch/Mutex.h"
#include <pthread.h>

namespace jrate { namespace synch {

class EventVariable {
public:
    EventVariable(bool notified = false);
    ~EventVariable();

public:
    /**
     * Restarts one of the threads that are waiting on this
     * <code>EventVariable</code>. If no threads are waiting on cond,
     * nothing happens, but the fact that the
     * <code>EventVariable</code> was signaled is remenbered. If
     * several threads are waiting on cond, exactly one is restarted,
     * but it is not specified which.
     */
    void notify();

    /**
     * Waits for the <code>EventVariable> to be notified, or returns
     * immediately if it was already notified.
     */
    void wait();

    /**
     * Tests whether the event variable has already been notified and
     * in this case it returns true. Otherwise it waits for it to be
     * notified.
     *
     * @return true if this <code>EventVariable</code> was already
     * notified when the method was called.
     */
    bool testAndWait();

    /**
     * Restarts all the thread that are waiting on the event variable.
     */
    void notifyAll();

private:
    pthread_mutex_t mutex_;
    pthread_cond_t  cond_;

    bool isNotified_;
    int waitingThreads_;
};

} /* jrate */ } /* synch */

#endif // _JRATE_SYNCH_EVENT_VARIABLE_H_
