// ************************************************************************
//    $Id: Schedulable.h 429 2004-09-15 20:32:02Z corsaro $
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
#ifndef JRATE_SCHED_SCHEDULABLE_H_
#define JRATE_SCHED_SCHEDULABLE_H_

namespace jrate { namespace sched {

class Schedulable {
    virtual void run();
};

} /* jrate */ } /* sched */



#endif /* JRATE_SCHED_SCHEDULABLE_H_ */
