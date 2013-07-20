// ************************************************************************
//    $Id: TSSScope.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_TSS_SCOPE_H_
#define _JRATE_SCHED_TSS_SCOPE_H_

#include "jrate/sys/Runtime.h"
#include "jrate/sched/TSS.h"

namespace jrate { namespace sched {

template <typename T>
class TSSScope {
public:
    typedef ::jrate::sched::TSS<T> ScopeTSS_t;
public:
    TSSScope(T* newScope) {
        outerScope = ::jrate::sys::getTSS<ScopeTSS_t>().get();
        ::jrate::sys::getTSS<ScopeTSS_t>().set(newScope);
    }

    ~TSSScope() {
        ::jrate::sys::getTSS<ScopeTSS_t>().set(outerScope);
    }

private:
    TSSScope(TSSScope&);
    TSSScope& operator=(const TSSScope&);

private:
    T* outerScope;
};

} /* jrate */ } /* sched */

#endif // _JRATE_SCHED_TSS_SCOPE_H_
