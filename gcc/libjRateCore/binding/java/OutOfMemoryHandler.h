// ************************************************************************
//    $Id: OutOfMemoryHandler.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_BINDING_JAVA_OUT_OF_MEMORY_HANDLER_H_
#define _JRATE_BINDING_JAVA_OUT_OF_MEMORY_HANDLER_H_

#include <java/lang/OutOfMemoryError.h>

namespace jrate { namespace binding { namespace java {

class OutOfMemoryHandler {
public:
    static void handleOutOfMemory();
    static void init();
private:
    static ::java::lang::OutOfMemoryError* jRateOutOfMemoryError_;
};

} /* jrate */ } /* binding */ } /* java */


#endif // _JRATE_BINDING_JAVA_OUT_OF_MEMORY_HANDLER_H_
