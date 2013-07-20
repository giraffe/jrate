// ************************************************************************
//    $Id: Allocator.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_ALLOCATOR_H_
#define _JRATE_MEM_ALLOCATOR_H_

#include "jrate/synch/Synchronizer.h"
#include "jrate/mem/MemLockingPolicy.h"
#include "jrate/mem/ObjectInitializer.h"
#include "jrate/mem/BufferProvider.h"
#include "jrate/mem/Finalizer.h"
#include "jrate/mem/Buffer.h"

#include <string.h>


namespace jrate { namespace mem {

/**
 * Alignment Traits. This class provides facilities to align
 * memory addresses.
 */
template <size_t ALIGNMENT>
class AlignmentTrait {
public:
    enum {ALIGNMENT_MASK = ~(ALIGNMENT - 1)};

    static size_t align(size_t address) {
        size_t tmp = address & ALIGNMENT_MASK;
        if (tmp != address)
            tmp += ALIGNMENT;
        return tmp;
    }
};


/**
 * Specialized version for alignemt of 1 byte i.e. no alignemt
 * requirments
 */
 template<>
 class AlignmentTrait<1> {
 public:
     enum {ALIGNMENT_MASK = ~(0)}; // This way we don't need to know how
     // many bit is the current platform

     static size_t align(size_t address) { return address; }
 };

//////////////////////////////////////////////////////////////////////////////
template <typename T>
class NullInitializer {
public:
    inline static void initialize(T& t) { }

    inline static void initChunk(void* addr, size_t size) { }
};

//////////////////////////////////////////////////////////////////////////////
template <typename T>
class ZeroBufInitializer {
public:
    inline static void initialize(T& t) {
        t.zeroBuffer();
    }

    inline static void initChunk(void* addr, size_t size) { }
};

//////////////////////////////////////////////////////////////////////////////
template <typename T>
class ZeroChunkInitializer {
public:
    inline static void initialize(T& t) {}

    inline static void initChunk(void* addr, size_t size) {
        memset(addr, 0, size);
    }
};

//////////////////////////////////////////////////////////////////////////////
template <typename T>
class NullRecycler {
public:
    inline static void recycle(T& t) { }
};

//////////////////////////////////////////////////////////////////////////////
template <typename T>
class ZeroRecycler {
public:
    inline static void recycle(T& t) {
        t.zeroAllocatedBuffer();
    }
};

} /* jrate */ } /* mem */

#include <jrate/mem/StackAllocator.h>
#include <jrate/mem/MallocAllocator.h>

#endif // _JRATE_MEM_ALLOCATOR_H_
