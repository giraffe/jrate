// ************************************************************************
//    $Id: TimeoutHandler.java 416 2004-02-22 18:35:45Z corsaro $
// ************************************************************************
//
//                               RTSJBench
//
//               Copyright (C) 2001-2004 by Angelo Corsaro.
//                         <corsaro@cs.wustl.edu>
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
//
// *************************************************************************
//  
// *************************************************************************
import javax.realtime.*;


public class TimeoutHandler extends javax.realtime.BoundAsyncEventHandler {

    TimeoutHandler(SchedulingParameters scheduling,
                   ReleaseParameters release,
                   MemoryParameters memory,
                   MemoryArea area,
                   ProcessingGroupParameters group,
                   boolean nonheap,
                   Runnable logic)
    {
        super(scheduling,
              release,
              memory,
              area,
              group,
              nonheap,
              logic);
    }
}

