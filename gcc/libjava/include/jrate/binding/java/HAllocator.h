// ************************************************************************
//    $Id: HAllocator.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_H_ALLOCATOR_H_
#define _JRATE_BINDING_JAVA_H_ALLOCATOR_H_

#include <java/lang/Object.h>
#include <javax/realtime/HeapMemory.h>

#include "jrate/mem/Allocator.h"
#include "jrate/synch/Synchronizer.h"
#include "jrate/binding/java/ObjectInitializer.h"
#include "jrate/binding/java/Finalizer.h"
#include "jrate/binding/java/OutOfMemoryHandler.h"
#include "jrate/sys/Platform.h"

namespace jrate {
    namespace binding {
        namespace java {
#if 0
            typedef jrate::mem::MallocAllocator<
                ::jrate::mem::DefaultMallocAllocatorHeader<10>,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::ObjectInitializer< ::javax::realtime::HeapMemory >,
                Finalizer_t,
                ::jrate::mem::ZeroChunkInitializer,
                ::java::lang::Object*> HAllocator_t;
#endif
            typedef ::jrate::mem::StackAllocator<
                ::jrate::mem::MMapBufferProvider<jrate::mem::SimpleMemLockingPolicy, 8>,
                ::jrate::mem::DefaultStackAllocatorHeader_t,
                ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT,
                ::jrate::binding::java::OutOfMemoryHandler,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::ObjectInitializer< ::javax::realtime::HeapMemory >,
                ::jrate::binding::java::Finalizer_t,
                ::jrate::mem::NullInitializer,
                ::jrate::mem::NullRecycler,
                ::java::lang::Object* > HAllocator_t; 
            
        }
    }
}

#endif //  _JRATE_BINDING_JAVA_H_ALLOCATOR_H_
