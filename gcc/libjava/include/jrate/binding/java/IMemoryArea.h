// ************************************************************************
//    $Id: IMemoryArea.h 428 2004-09-15 00:04:21Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_IMEMORY_AREA_H_
#define _JRATE_BINDING_JAVA_IMEMORY_AREA_H_

//
// This file contains all the typedefs that are necessary in order to
// bind jRate classes to Java classes. It mostly contains a set of
// typedefs.
//

#include <jrate/mem/IMemoryArea.h>
#include <jrate/mem/DisplayRefChecker.h>
#include <jrate/sched/TSS.h>

#include <java/lang/Class.h>
#include <javax/realtime/MemoryArea.h>


namespace jrate {
   namespace binding {
      namespace java {
          typedef ::jrate::mem::IMemoryArea< ::java::lang::Object*,
                                             ::java::lang::Class,
                                             ::jrate::mem::DisplayRefChecker_t,
                                             ::javax::realtime::MemoryArea>
          IMemoryArea_t; 
          
          typedef ::jrate::sched::TSS <IMemoryArea_t> IMemoryAreaTSS_t; 
      }
   }
}

extern "C++" {
    namespace jrate {
        namespace sys {
            template <typename T> T& getTSS();
            
            template<> ::jrate::binding::java::IMemoryAreaTSS_t&
            getTSS< ::jrate::binding::java::IMemoryAreaTSS_t > ();
        }
    }
}

#endif // _JRATE_BINDING_JAVA_IMEMORY_AREA_H_
