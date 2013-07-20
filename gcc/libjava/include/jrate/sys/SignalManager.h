// ************************************************************************
//    $Id: SignalManager.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYS_SIGNAL_MANAGER_H_
#define _JRATE_SYS_SIGNAL_MANAGER_H_

#include <signal.h>

#include <jrate/sys/SignalSet.h>
#include <jrate/sys/ISignalHandler.h>
#include <jrate/sys/Platform.h>
#include <jrate/sched/TSS.h>

namespace jrate { namespace sys {

void signalDispatcher(int signum);

class SignalManager {

public:
    /**
     * Registers a signal handler for the given signal. When
     * registering this way the default behaviour is that defined by
     * SA_RESTART.
     *
     * @param signal the signal for which the handler has to be
     * registered.
     *
     * @param sigHandler the signal handler.
     *
     */
    static bool registerSignalHandler(int signal,
                                      jrate::sys::ISignalHandler* sigHandler);

    /**
     * Registers a signal handler for a given signa, and provides a
     * set of signals that should be blocked when processing the given
     * signal.
     *
     * @param signal the signal for which the handler should be
     * registered.
     *
     * @param sigHandler the signal handler
     *
     * @param sigSet the set of signal that should be blocked while
     * handling this signal.
     */
    static bool registerSignalHandler(int signal,
                                      jrate::sys::ISignalHandler* sigHandler,
                                      const jrate::sys::SignalSet& sigSet);

    /**
     * Registers a signal handler for a given signa, and provides a
     * set of signals that should be blocked when processing the given
     * signal.
     *
     * @param signal the signal for which the handler should be
     * registered.
     *
     * @param sigHandler the signal handler
     *
     * @param sigSet the set of signal that should be blocked while
     * handling this signal.
     *
     * @param flags the set of flags that control the behaviour of the
     * signal handling and processing.
     */
    static bool registerSignalHandler(int signal,
                                      jrate::sys::ISignalHandler* sigHandler,
                                      const jrate::sys::SignalSet& sigSet,
                                      int flags);


    /**
     * Returns the set of currently pending signals.
     *
     * @returns the set of pending signals.
     */
    static jrate::sys::SignalSet  pendingSignal();

    /**
     * Returns the set of currently pending signals.
     *
     */
    static void pendingSignal(jrate::sys::SignalSet& ss);


    /**
     * Temporarily replaces the signal mask for the process with that
     * given by mask and then suspends the process until a signal is
     * received.
     *
     * @param sigSet the set of signals that the process want to wait
     * for.
     */
    static bool suspend(const jrate::sys::SignalSet& sigSet);

    /**
     * The set of blocked signals is the union of the current set and
     * the set argument.
     *
     * @param the set representing the signal mask
     */
    static bool blockSignals(const jrate::sys::SignalSet& sigSet);

    /**
     * The signals in set are removed from the current set of blocked
     * signals. It is legal to attempt to unblock a signal which is
     * not blocked.
     *
     * @param the set representing the signal mask
     */
    static bool unblockSignals(const jrate::sys::SignalSet& sigSet);

    /**
     * The set of blocked signals is set to the argument set.
     *
     * @param the set representing the signal mask
     */
    static bool setSignalMask(const jrate::sys::SignalSet& sigSet);

private:
    friend void jrate::sys::signalDispatcher(int signum);

    inline static void handleSignal(int signum) {
        sigHandlerTSS_[signum-1].get()->handleSignal(signum);
    }

private:
    SignalManager();
    ~SignalManager();

private:
    static jrate::sched::TSS<jrate::sys::ISignalHandler>
    sigHandlerTSS_[jrate::sys::PlatformTraits_t::SIGNAL_NUMBER];
};

}/* jrate */ } /* sys */

#endif // _JRATE_SYS_SIGNAL_MANAGER_H_
