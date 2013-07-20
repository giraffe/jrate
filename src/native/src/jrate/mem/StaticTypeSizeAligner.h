// ************************************************************************
//    $Id: StaticTypeSizeAligner.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_MEM_STATIC_TYPE_SIZE_ALIGNER_H_
#define _JRATE_MEM_STATIC_TYPE_SIZE_ALIGNER_H_

#include "jrate/meta/IF.h"

namespace jrate { namespace mem {

template <int ALIGNMENT, typename T>
class ComputeAlignedSize {
public:
    enum {
        RESULT =
           jrate::meta::IF < ((sizeof(T) >> ALIGNMENT) << ALIGNMENT) == sizeof(T),
           sizeof(T),
           ((sizeof(T) >>  ALIGNMENT) <<  ALIGNMENT) + (1 << ALIGNMENT) >::RESULT
    };
};

} /* jrate */ } /* mem */

#endif // _JRATE_MEM_STATIC_TYPE_SIZE_ALIGNER_H_
