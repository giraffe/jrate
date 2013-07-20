// ************************************************************************
//    $Id: Semaphore.h 429 2004-09-15 20:32:02Z corsaro $
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

#ifndef _JRATE_SYNCH_SEMAPHORE_H_
#define _JRATE_SYNCH_SEMAPHORE_H_

#include <semaphore.h>

namespace jrate { namespace synch {


class Semaphore {
public:
    Semaphore(unsigned int count = 1);
    ~Semaphore();

    inline int wait() {
          return sem_wait(&this->semaphore);
    }

    inline int tryWait() {
          return sem_trywait(&this->semaphore);
    }

    inline int signal() {
          return sem_post(&this->semaphore);
    }

    inline int getValue() {
        int sval;
        sem_getvalue(&this->semaphore, &sval);
        return sval;
    }

private:
  sem_t semaphore;
};

} /* jrate */ } /* synch */

#endif /* _JRATE_SYNCH_SEMAPHORE_H_*/
