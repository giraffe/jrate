// ************************************************************************
//    $Id: Synchronizer.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef _JRATE_SYNCH_SYNCHRONIZER_H_
#define _JRATE_SYNCH_SYNCHRONIZER_H_

#include <jrate/synch/Mutex.h>

namespace jrate { namespace synch {

class NullSynchronizer;
typedef NullSynchronizer NullSynchronizer_t;
typedef ::jrate::synch::Mutex<FAST>  MutexSynchronizer_t;
typedef ::jrate::synch::Mutex<RECURSIVE> RecursiveMutexSynchronizer_t;

class NullSynchronizer
{
public:
   inline void acquire() { }
   inline void release() { }
};

} /* jrate */ } /* synch */

#endif // _JRATE_SYNCH_SYNCHRONIZER_H_
