// ************************************************************************
//    $Id: SignalSet.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYS_SIGNAL_SET_H_
#define _JRATE_SYS_SIGNAL_SET_H_

#include <signal.h>

extern "C++" {
    namespace jrate {
        namespace sys {
            class SignalManager;
        }
    }
}

namespace jrate { namespace sys {


class SignalSet {
public:
    SignalSet();
    SignalSet(const SignalSet& ss);
    SignalSet(sigset_t sigset);
    ~SignalSet();

public:
    /**
     * Adds a signal to the set.
     *
     * @param signo the number of the signa
     */
    void addSignal(int signum);
    void removeSignal(int signum);
    bool hasSignal(int signum);

public:
    /**
     * Resets all the signal that had been added so far.
     */
    void resetAll();

    /**
     * Add to the set all the signal defined in the underlying system.
     */
    void setAll();

public:
    const jrate::sys::SignalSet& operator=(const jrate::sys::SignalSet& ss);
    const jrate::sys::SignalSet& operator+=(const jrate::sys::SignalSet& ss);
    const jrate::sys::SignalSet& operator-=(const jrate::sys::SignalSet& ss);

private:
    friend class jrate::sys::SignalManager;
    inline sigset_t& signalSet() const { return signalSet_; }
    void add_(sigset_t& to, sigset_t& from) const;
    void sub_(sigset_t& to, sigset_t& from) const;
    void set_(sigset_t& to, sigset_t& from) const;
private:
    mutable sigset_t signalSet_;
};

}/* jrate */ } /* sys */

#endif // _JRATE_SYS_SIGNAL_SET_H_
