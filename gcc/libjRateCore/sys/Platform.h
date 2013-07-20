// ************************************************************************
//    $Id: Platform.h 416 2004-02-22 18:35:45Z corsaro $
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
#ifndef _JRATE_SYS_PLATFORM_H_
#define _JRATE_SYS_PLATFORM_H_

#include <signal.h>

namespace jrate {
    namespace sys {
        enum { JRATE_LINUX = 0, JRATE_WINDOWS = 1};
        
        template<int PlatformCode>
        struct PlatformTraits { };
        
        template<> struct PlatformTraits<JRATE_LINUX> {
            enum {MALLOC_ALIGNMENT = 8};
            enum {MALLOC_ALIGNMENT_EXP = 3};
            enum {PAGE_SIZE = 4096};
            enum {PAGE_SIZE_EXP = 12};
            enum {THREAD_MAX_VALUE = 8183};
            enum {SIGNAL_NUMBER = 31}; // Value set looking up the bits/signum.h
            enum {SIG_MIN = 1, SIG_MAX = 31}; // Value set looking up the bits/signum.h
            enum {SIGNAL_FLAGS = SA_RESTART};
        };
        
        typedef PlatformTraits<JRATE_LINUX> CurrentPlatformTraits_t;
        typedef PlatformTraits<JRATE_LINUX> PlatformTraits_t;
    }
}
#endif // _JRATE_SYS_PLATFORM_H_
