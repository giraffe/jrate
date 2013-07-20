// ************************************************************************
//    $Id: MemoryAreaScope.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_MEMORY_AREA_SCOPE_H_
#define _JRATE_BINDING_JAVA_MEMORY_AREA_SCOPE_H_

#include <jrate/sched/TSSScope.h>
#include <jrate/binding/java/IMemoryArea.h>

namespace jrate {
    namespace binding {
        namespace java {
            typedef ::jrate::sched::TSSScope< ::jrate::binding::java::IMemoryArea_t > MemoryAreaScope_t;
        }
    }
}

#endif // _JRATE_BINDING_JAVA_MEMORY_AREA_SCOPE_H_
