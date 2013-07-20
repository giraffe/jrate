// ************************************************************************
//    $Id: IMAllocator.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_IMALLOCATOR_H_
#define _JRATE_BINDING_JAVA_IMALLOCATOR_H_

#include <jrate/Config.h>

#if 0 ///////////////////////////////////////////////////////////////////

#if (JRATE_IMMORTAL_MEMORY == JRATE_CT_MEMORY)

#include "CTAllocator.h"
typedef CTAllocator IMAllocator;

#elif (JRATE_IMMORTAL_MEMORY == JRATE_LT_MEMORY)

#include "LTAllocator.h"
typedef LTAllocator IMAllocator;

#elif (JRATE_IMMORTAL_MEMORY == JRATE_VT_MEMORY)

#include "VTAllocator.h"
typedef VTAllocator IMAllocator;

#else

#error "Misconfigured ImmortalMemory, check your jrate/Config.h"

#endif // (JRATE_IMMORTAL_MEMORY == JRATE_CT_MEMORY)

#endif ///////////////////////////////////////////////////////////////////

#include <java/lang/Object.h>
#include <javax/realtime/ImmortalMemory.h>

#include "jrate/mem/Allocator.h"
#include "jrate/binding/java/Finalizer.h"
#include "jrate/binding/java/ObjectInitializer.h"
#include "jrate/binding/java/OutOfMemoryHandler.h"
#include "jrate/sys/Platform.h"

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::mem::StackAllocator<
                ::jrate::mem::MMapBufferProvider<jrate::mem::SimpleMemLockingPolicy,
                                                 ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT >,
                ::jrate::mem::DefaultStackAllocatorHeader_t,
                ::jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT,
                ::jrate::binding::java::OutOfMemoryHandler,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::ObjectInitializer< ::javax::realtime::ImmortalMemory >,
                ::jrate::binding::java::Finalizer_t,
                ::jrate::mem::NullInitializer,
                ::jrate::mem::NullRecycler,
                ::java::lang::Object* > IMAllocator_t;
      }
   }
}
#endif // _JRATE_BINDING_JAVA_IMALLOCATOR_H_


