// ************************************************************************
//    $Id: Runnable.h 429 2004-09-15 20:32:02Z corsaro $
// ************************************************************************
//
//                                 ACT
//
//               Copyright (C) 2001-2002 by Angelo Corsaro.
//                         <corsaro@ece.uci.edu>
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

#ifndef _JRATE_SCHED_RUNNABLE_H_
#define _JRATE_SCHED_RUNNABLE_H_

namespace jrate { namespace sched {

class Runnable {
public:
    static Runnable NoAction;

public:
    virtual ~Runnable();
    virtual void run() { };
};

} /* jrate */ } /* sched */

#endif // _JRATE_SCHED_RUNNABLE_H_
