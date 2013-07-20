// ************************************************************************
//    $Id: VTAllocator.h 474 2005-01-24 11:03:10Z mdeters $
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
#ifndef _JRATE_BINDING_JAVA_VTALLOCATOR_H_
#define _JRATE_BINDING_JAVA_VTALLOCATOR_H_

#if 0 ///////////////////////////////////////////////////////////////////
#include <jrate/Config.h>

#if (JRATE_VT_MEMORY_ALLOCATOR == JRATE_MEMORY_MAPPED_ALLOCATOR)

#error "VT Memory Mapped Allocator is not supported yet!"

#elif (JRATE_VT_MEMORY_ALLOCATOR == JRATE_MALLOC_ALLOCATOR)

#include "VTMAllocator.h"
typedef VTMAllocator VTAllocator;

#else

#error "Misconfigured ImmortalMemory, check your jrate/Config.h"

#endif // JRATE_LT_MEMORY_ALLOCATOR
#endif ////////////////////////////////////////////////////////////////////

#if 0
#include <java/lang/Object.h>
#include <javax/realtime/VTMemory.h>
#include <jrate/mem/Allocator.h>
#include <jrate/synch/Synchronizer.h>
#include <jrate/binding/java/Finalizer.h>
#include <jrate/binding/java/ObjectInitializer.h>

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::mem::MallocAllocator<
                ::jrate::mem::DefaultMallocAllocatorHeader<10>,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::ObjectInitializer< ::javax::realtime::VTMemory >,
                ::jrate::binding::java::Finalizer_t,
                ::jrate::mem::ZeroChunkInitializer,
                ::java::lang::Object*> VTAllocator_t;
      }
   }
}
#endif

#include <java/lang/Object.h>
#include <javax/realtime/VTMemory.h>

#include "jrate/mem/Allocator.h"
#include "jrate/sys/Platform.h"
#include "jrate/binding/java/Finalizer.h"
#include "jrate/binding/java/ObjectInitializer.h"
#include "jrate/synch/Synchronizer.h"
#include "jrate/binding/java/OutOfMemoryHandler.h"
#include "jrate/binding/java/MemoryAreaBufferProvider.h"

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::mem::StackAllocator <
                ::jrate::binding::java::MemoryAreaBufferProvider_t,
                ::jrate::mem::DefaultStackAllocatorHeader_t,
                ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT,
                ::jrate::binding::java::OutOfMemoryHandler,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::ObjectInitializer< ::javax::realtime::VTMemory >,
                ::jrate::binding::java::Finalizer_t,
                ::jrate::mem::ZeroChunkInitializer,
                ::jrate::mem::NullRecycler,
                ::java::lang::Object* > VTAllocator_t;
        }
    }
}

#endif // _JRATE_BINDING_JAVA_VTALLOCATOR_H_
