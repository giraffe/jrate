// ************************************************************************
//    $Id: Mutex.h 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
//
//                                 jRate
//
//               Copyright (C) 2001-2002 by Angelo Corsaro.
//                         <corsaro@ece.uci.edu>
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

#ifndef _JRATE_SYNCH_MUTEX_H_
#define _JRATE_SYNCH_MUTEX_H_

#include <pthread.h>

namespace jrate {
    namespace synch {
        enum { FAST = 0, RECURSIVE = 1 };
        template <bool recursive> class Mutex;

        template <bool recursive> void  createMutex(pthread_mutex_t* mutex);
        template <> void jrate::synch::createMutex<true>(pthread_mutex_t* mutex);
        
        typedef Mutex<RECURSIVE> RecursiveMutex_t;
        typedef Mutex<FAST> FastMutex_t;
    }
}

template <bool recursive> void  jrate::synch::createMutex(pthread_mutex_t* mutex) {
    pthread_mutexattr_t attrib;
    pthread_mutexattr_init(&attrib);
    pthread_mutexattr_settype(&attrib, PTHREAD_MUTEX_FAST_NP);
    pthread_mutex_init(mutex, &attrib);
    pthread_mutexattr_destroy(&attrib);
}


template <bool recursive>
class jrate::synch::Mutex {
public:
    Mutex() {
        jrate::synch::createMutex<recursive>(&mutex_);
    }
    ~Mutex() {
        pthread_mutex_destroy(&mutex_);
    }

public:
    void acquire() {
        pthread_mutex_lock(&mutex_);
    }
    
    void release() {
        pthread_mutex_unlock(&mutex_);
    }
    
    bool tryAcquire() {
        int result = pthread_mutex_trylock(&mutex_);
        return result != -1;
    }

public:
    pthread_mutex_t * getHandle() {
        return &mutex_;
    }
    
protected:
    pthread_mutex_t mutex_;
    
};

#endif // _JRATE_SYNCH_MUTEX_H_
