// ************************************************************************
//    $Id: TSS.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SCHED_TSS_H_
#define _JRATE_SCHED_TSS_H_

#include <pthread.h>

namespace jrate { namespace sched {


template <typename T>
class TSS {
public:
    TSS(void (*cleanup)(void*) = 0) {
        pthread_key_create(&key_, cleanup);
    }

    ~TSS() {
        pthread_key_delete(key_);
    }

public:
    bool set(const T* tss) {
        return pthread_setspecific(key_, tss) == 0;
    }

    T* get() const {
        return (T*)pthread_getspecific(key_);
    }

private:
    pthread_key_t key_;
};

} /* jrate */ } /* sched */

#endif // _JRATE_SCHED_TSS_H_
