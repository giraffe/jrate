// ************************************************************************
//    $Id: DeadlineMissHandlerLogic.java 334 2003-05-29 18:33:20Z corsaro $
// ************************************************************************
//
//                                jRate
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
import javax.realtime.RealtimeThread;


/**
 * This class implements the deadline miss handler logic. It keeps a
 * reference to the thread for which it has to handle the erroneous
 * condition.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class DeadlineMissHandlerLogic implements Runnable {

    private RealtimeThread rtThread;

    public DeadlineMissHandlerLogic() { }
    public DeadlineMissHandlerLogic(RealtimeThread rtThread) { this.rtThread = rtThread; }

    public void setRealtimeThread(RealtimeThread rtThread) {
        this.rtThread = rtThread;
    }

    public RealtimeThread getRealtimeThread() {
        return this.rtThread;
    }
    
    public void run() {
        System.out.println("\t\t>> Handling Deadline Miss");
        rtThread.schedulePeriodic();
    }
};
