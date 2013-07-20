// ************************************************************************
//    $Id: Assertions.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_UTILS_ASSERTION_H_
#define _JRATE_UTILS_ASSERTION_H_

namespace jrate { namespace utils {

      // -- Compile Time Assertion --

template<bool> struct CompileTimeChecker;
template<> struct CompileTimeChecker<true> {
    CompileTimeChecker(...);
};
template<> struct CompileTimeChecker<false> { };

}/* jrate */ } /* utils */

#define Static_Ensure(expr, msg) \
  { \
     class Error_##msg {}; \
     (void)sizeof((void*) &jrate::utils::CompileTimeChecker<(expr) != 0>(Error_##msg())); \
  }

#endif // _JRATE_UTILS_ASSERTION_H_
