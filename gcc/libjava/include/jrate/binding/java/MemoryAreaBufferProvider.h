// ************************************************************************
//    $Id: MemoryAreaBufferProvider.h 428 2004-09-15 00:04:21Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_MEMORY_AREA_BUFFER_PROVIDER_H_
#define _JRATE_BINDING_JAVA_MEMORY_AREA_BUFFER_PROVIDER_H_


#include "jrate/mem/BufferProvider.h"
#include "jrate/mem/MemLockingPolicy.h"

#include "jrate/synch/Synchronizer.h"

#include "jrate/sys/Platform.h"

#include "jrate/binding/java/Runtime.h"
#include "jrate/binding/java/OutOfMemoryHandler.h"

namespace jrate {
    namespace binding {
        namespace java {
            class MemoryAreaBufferProvider;
            typedef MemoryAreaBufferProvider MemoryAreaBufferProvider_t;

            typedef ::jrate::mem::SegregatedBufferProvider <
                        ::jrate::mem::MMapBufferProvider <
                            ::jrate::mem::SimpleMemLockingPolicy,
                            ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT >,
                        ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT_EXP,
                        ::jrate::sys::PlatformTraits_t::PAGE_SIZE_EXP,
                        ::jrate::binding::java::OutOfMemoryHandler,
                        ::jrate::synch::MutexSynchronizer_t >
            MemoryAreaBufferProviderBase_t;
        }
    }
}

class jrate::binding::java::MemoryAreaBufferProvider
    : public ::jrate::binding::java::MemoryAreaBufferProviderBase_t
{
protected:
    MemoryAreaBufferProvider(size_t size);
    
public:
    ~MemoryAreaBufferProvider();
    
public:
    static MemoryAreaBufferProvider& instance();
};

#endif // _JRATE_BINDING_JAVA_MEMORY_AREA_BUFFER_PROVIDER_H_
