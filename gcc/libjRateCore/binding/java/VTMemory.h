// ************************************************************************
//    $Id: VTMemory.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_VT_MEMORY_H_
#define _JRATE_BINDING_JAVA_VT_MEMORY_H_

#include "jrate/mem/MemoryArea.h"
#include "jrate/mem/BufferProvider.h"

#include "jrate/synch/Synchronizer.h"

#include "jrate/sys/Platform.h"

#include "jrate/binding/java/IMemoryArea.h"
#include "jrate/binding/java/VTAllocator.h"
#include "jrate/binding/java/MemoryAreaBufferProvider.h"

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::mem::MemoryArea <
                ::jrate::binding::java::IMemoryArea_t,
                ::jrate::binding::java::VTAllocator_t,
                ::jrate::binding::java::MemoryAreaBufferProvider_t,
                ::jrate::synch::MutexSynchronizer_t,
                ::jrate::binding::java::IMemoryArea_t::ptr_t,
                ::jrate::binding::java::IMemoryArea_t::klass_t,
                ::jrate::mem::SCOPED_MEMORY
                | ::jrate::mem::SINGLE_PARENT_MEMORY
                | ::jrate::mem::CHECKED_REFERENCE_MEMORY >
            VTMemory_t;
        }
    }
}


#endif // _JRATE_BINDING_JAVA_VT_MEMORY_H_
