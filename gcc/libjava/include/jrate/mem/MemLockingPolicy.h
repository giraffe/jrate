// ************************************************************************
//    $Id: MemLockingPolicy.h 527 2005-04-01 21:28:33Z mdeters $
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
#ifndef _JRATE_MEM_MEM_LOCKING_POLICY_H_
#define _JRATE_MEM_MEM_LOCKING_POLICY_H_

#include <stdlib.h>
#include <sys/mman.h>

#include <jrate/jRate.h>
#include <jrate/mem/Buffer.h>

namespace jrate { namespace mem {

class SimpleMemLockingPolicy;
class NullMemLockingPolicy;
class DeepMemLockingPolicy;

typedef SimpleMemLockingPolicy  SimpleMemLockingPolicy_t;
typedef NullMemLockingPolicy    NullMemLockingPolicy_t;
typedef DeepMemLockingPolicy    DeepMemLockingPolicy_t;

//////////////////////////////////////////////////////////////////////
//
class SimpleMemLockingPolicy {
public:
   static int lockMemory(const jrate::mem::Buffer &buffer) {
      return mlock(buffer.handle(), buffer.size());
   }

   static int unlockMemory(const jrate::mem::Buffer &buffer) {
      return munlock(buffer.handle(), buffer.size());
   }
};

//////////////////////////////////////////////////////////////////////
//
class NullMemLockingPolicy {
public:
    static int lockMemory(const jrate::mem::Buffer &buffer) { return 0; }
    static int unlockMemory(const jrate::mem::Buffer &buffer) { return 0;}
};

//////////////////////////////////////////////////////////////////////
//
class DeepMemLockingPolicy {
public:
    static int lockMemory(const jrate::mem::Buffer &buffer) {
        int retVal = mlock(buffer.handle(), buffer.size());
        char* buf = buffer.handle();
        for (size_t i = 0; i < buffer.size(); i += JRATE_PAGE_SIZE)
            buf[i] = 0;

        return retVal;
    }

    static int unlockMemory(const jrate::mem::Buffer &buffer) {
        return munlock(buffer.handle(), buffer.size());
    }
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_MEM_LOCKING_POLICY_H_
