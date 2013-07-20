// ************************************************************************
//    $Id: Finalizer.h 527 2005-04-01 21:28:33Z mdeters $
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
#ifndef _JRATE_MEM_FINALIZER_H_
#define _JRATE_MEM_FINALIZER_H_

#include <stdio.h>

namespace jrate { namespace mem {

class NullFinalizer;
class DebugFinalizer;

typedef NullFinalizer NullFinalizer_t;
typedef DebugFinalizer DebugFinalizer_t;

struct NullFinalizer { };

class DebugFinalizer {
public:
    inline void operator()(void* addr) {
        printf(">> Finalizing object at: %p\n", addr);
    }
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_FINALIZER_H_
