// ************************************************************************
//    $Id: RefCountedArena.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_REF_COUNTED_ARENA_H_
#define _JRATE_BINDING_JAVA_REF_COUNTED_ARENA_H_

#include "jrate/mem/MemoryArea.h"
#include "jrate/mem/BufferProvider.h"

#include "jrate/synch/Synchronizer.h"

#include "jrate/utils/TypeWrapper.h"

#include "jrate/binding/java/IMemoryArea.h"
#include "jrate/binding/java/RefCountedArenaAllocator.h"
#include "jrate/binding/java/MemoryAreaBufferProvider.h"

#include"jrate/sys/Platform.h"

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::mem::MemoryArea <
                ::jrate::binding::java::IMemoryArea_t,
                ::jrate::binding::java::RefCountedArenaAllocator_t,
                ::jrate::binding::java::MemoryAreaBufferProvider_t,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::IMemoryArea_t::ptr_t,
                ::jrate::binding::java::IMemoryArea_t::klass_t,
                ::jrate::mem::ARENA_MEMORY
                | ::jrate::mem::MULTIPLE_PARENT_MEMORY
                | ::jrate::mem::SAFE_REFERENCE_MEMORY >
            RefCountedArena_t;
        }
    }
}

#endif // _JRATE_BINDING_JAVA_REF_COUNTED_ARENA_H_
