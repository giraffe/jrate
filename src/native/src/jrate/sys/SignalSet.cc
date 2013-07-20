#include <jrate/sys/SignalSet.h>
#include <jrate/sys/Platform.h>

///////////////////////////////////////////////////////////////////////////
                          // SignalSet() //
///////////////////////////////////////////////////////////////////////////
jrate::sys::SignalSet::SignalSet() {
    sigemptyset(&signalSet_);
}

///////////////////////////////////////////////////////////////////////////
                 // SignalSet(const SignalSet& ss) //
///////////////////////////////////////////////////////////////////////////
jrate::sys::SignalSet::SignalSet(const SignalSet& ss) {
    *this = ss;
}

///////////////////////////////////////////////////////////////////////////
                          // ~SignalSet() //
///////////////////////////////////////////////////////////////////////////
jrate::sys::SignalSet::~SignalSet() {
}

///////////////////////////////////////////////////////////////////////////
                     // addSignal(int signum) //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::addSignal(int signum) {
    sigaddset(&signalSet_, signum);
}

///////////////////////////////////////////////////////////////////////////
                    // removeSignal(int signum) //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::removeSignal(int signum) {
    sigdelset(&signalSet_, signum);
}

///////////////////////////////////////////////////////////////////////////
                     // hasSignal(int signum) //
///////////////////////////////////////////////////////////////////////////
bool
jrate::sys::SignalSet::hasSignal(int signum) {
    return sigismember(&signalSet_, signum);
}


///////////////////////////////////////////////////////////////////////////
                           // resetAll() //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::resetAll() {
    sigemptyset(&signalSet_);
}

///////////////////////////////////////////////////////////////////////////
                     // hasSignal(int signum) //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::setAll() {
    sigfillset(&signalSet_);
}

///////////////////////////////////////////////////////////////////////////
              // operator=(jrate::sys::SignalSet& ss) //
///////////////////////////////////////////////////////////////////////////
const jrate::sys::SignalSet&
jrate::sys::SignalSet::operator=(const jrate::sys::SignalSet& ss) {
    if (&ss == this)
        return *this;
    
    this->set_(signalSet_, ss.signalSet_);
    
    return *this;
}

///////////////////////////////////////////////////////////////////////////
             // operator+=(jrate::sys::SignalSet& ss) //
///////////////////////////////////////////////////////////////////////////
const jrate::sys::SignalSet&
jrate::sys::SignalSet::operator+=(const jrate::sys::SignalSet& ss) {
    this->add_(signalSet_, ss.signalSet_);
    return *this;
}

///////////////////////////////////////////////////////////////////////////
             // operator-=(jrate::sys::SignalSet& ss) //
///////////////////////////////////////////////////////////////////////////
const jrate::sys::SignalSet&
jrate::sys::SignalSet::operator-=(const SignalSet& ss) {
    this->sub_(signalSet_, ss.signalSet_);
    return *this;
}


///////////////////////////////////////////////////////////////////////////
               // add_(sigset_t& to, sigset_t& from) //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::add_(sigset_t& to, sigset_t& from) const {
    for (int signum = jrate::sys::PlatformTraits_t::SIG_MIN;
         signum <= jrate::sys::PlatformTraits_t::SIG_MAX;
         ++signum)
    {
        
        if (sigismember(&from, signum))
            sigaddset(&to, signum);
    }    

}


///////////////////////////////////////////////////////////////////////////
               // sub_(sigset_t& to, sigset_t& from) //
///////////////////////////////////////////////////////////////////////////
void
jrate::sys::SignalSet::sub_(sigset_t& to, sigset_t& from) const {
    for (int signum = jrate::sys::PlatformTraits_t::SIG_MIN;
         signum <= jrate::sys::PlatformTraits_t::SIG_MAX;
         ++signum)
    {
        if (sigismember(&from, signum))
            sigdelset(&to, signum);
    }    

}

void
jrate::sys::SignalSet::set_(sigset_t& to, sigset_t& from) const {
    sigemptyset(&to);
    this->add_(to, from);
}
