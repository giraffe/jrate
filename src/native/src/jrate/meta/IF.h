// ************************************************************************
//    $Id: IF.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_META_IF_H_
#define _JRATE_META_IF_H_

namespace jrate { namespace meta {

template <bool COND, int THEN_VALUE, int ELSE_VALUE>
class IF;

template <int THEN_VALUE, int ELSE_VALUE>
class IF<false, THEN_VALUE, ELSE_VALUE>;

template <int THEN_VALUE, int ELSE_VALUE>
class IF<true, THEN_VALUE, ELSE_VALUE>;

template <int THEN_VALUE, int ELSE_VALUE>
class IF<false, THEN_VALUE, ELSE_VALUE> {
public:
    enum { RESULT = ELSE_VALUE };
};

template <int THEN_VALUE, int ELSE_VALUE>
class IF<true, THEN_VALUE, ELSE_VALUE> {
public:
    enum { RESULT = THEN_VALUE };
};

} /* jrate */ } /* meta */

#endif // _JRATE_META_IF_H_
