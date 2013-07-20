#include <jrate/sys/SignalManager.h>

jrate::sched::TSS<jrate::sys::ISignalHandler>
jrate::sys::SignalManager::sigHandlerTSS_[jrate::sys::PlatformTraits_t::SIGNAL_NUMBER];

void
jrate::sys::signalDispatcher(int signum) {
    SignalManager::handleSignal(signum);
}

///////////////////////////////////////////////////////////////////////////
                    // registerSignalHandler() //
///////////////////////////////////////////////////////////////////////////
bool
jrate::sys::SignalManager::registerSignalHandler(int signal,
                                                 jrate::sys::ISignalHandler* sigHandler,
                                                 const jrate::sys::SignalSet& sigSet,
                                                 int flags)
{
    sigHandlerTSS_[signal-1].set(sigHandler);
    struct sigaction act;
    act.sa_handler = &jrate::sys::signalDispatcher;
    sigSet.set_(act.sa_mask, sigSet.signalSet());
    act.sa_flags = flags;
    return sigaction(signal, &act, 0) == 0;
}


///////////////////////////////////////////////////////////////////////////
                    // registerSignalHandler() //
/////////////////////////////////////////////////////////////////////////// 
bool
jrate::sys::SignalManager::registerSignalHandler(int signal,
                                                 jrate::sys::ISignalHandler* sigHandler)
{
    jrate::sys::SignalSet ss;
    return registerSignalHandler(signal, sigHandler, ss, SA_RESTART);
}

///////////////////////////////////////////////////////////////////////////
                    // registerSignalHandler() //
///////////////////////////////////////////////////////////////////////////

 bool
 jrate::sys::SignalManager::registerSignalHandler(int signal,
                                                  jrate::sys::ISignalHandler* sigHandler,
                                                  const jrate::sys::SignalSet& sigSet)
{
    return registerSignalHandler(signal, sigHandler, sigSet, SA_RESTART);
}


///////////////////////////////////////////////////////////////////////////
                        // pendingSignal() //
///////////////////////////////////////////////////////////////////////////
jrate::sys::SignalSet
jrate::sys::SignalManager::pendingSignal() {
    SignalSet ss;
    sigpending(&ss.signalSet());
    return ss;
}



///////////////////////////////////////////////////////////////////////////
                        // pendingSignal() //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalManager::pendingSignal(jrate::sys::SignalSet& ss) {
    sigpending(&ss.signalSet());
}


///////////////////////////////////////////////////////////////////////////
                        // pendingSignal() //
///////////////////////////////////////////////////////////////////////////

bool
jrate::sys::SignalManager::suspend(const jrate::sys::SignalSet& ss) {
    return sigsuspend(&ss.signalSet());
}

///////////////////////////////////////////////////////////////////////////
                         // blockSignals() //
///////////////////////////////////////////////////////////////////////////
bool
jrate::sys::SignalManager::blockSignals(const jrate::sys::SignalSet& ss)
{
    return sigprocmask(SIG_BLOCK, &ss.signalSet(), 0);
}

///////////////////////////////////////////////////////////////////////////
                        // unblockSignals() //
///////////////////////////////////////////////////////////////////////////
bool
jrate::sys::SignalManager::unblockSignals(const jrate::sys::SignalSet& ss)
{
    return sigprocmask(SIG_UNBLOCK, &ss.signalSet(), 0);    
}

///////////////////////////////////////////////////////////////////////////
                        // setSignalMask() //
///////////////////////////////////////////////////////////////////////////
bool
jrate::sys::SignalManager::setSignalMask(const jrate::sys::SignalSet& ss)
{
    return sigprocmask(SIG_SETMASK, &ss.signalSet(), 0);    
}

