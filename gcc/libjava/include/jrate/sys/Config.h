// ************************************************************************
//    $Id: Config.h 423 2004-03-19 01:05:12Z corsaro $
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
#ifndef _JRATE_SYS_CONFIG_H_
#define _JRATE_SYS_CONFIG_H_

namespace jrate {
    namespace sys {
        //
        // Timer Resolution in microseconds
        //
        extern const unsigned long TIME_RESOLUTION;        
        extern const unsigned int  TIMER_MANAGER_QUEUE;
        extern const unsigned int  TIMER_MANAGER_EXECUTORS;
    }
}

#endif /* _JRATE_SYS_CONFIG_H_ */
