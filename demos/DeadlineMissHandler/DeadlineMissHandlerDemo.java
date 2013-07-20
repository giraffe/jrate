// ************************************************************************
//    $Id: DeadlineMissHandlerDemo.java 527 2005-04-01 21:28:33Z mdeters $
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
import javax.realtime.BoundAsyncEventHandler;
import javax.realtime.PeriodicParameters;
import javax.realtime.RelativeTime;
import javax.realtime.Clock;

/**
 * This class illustrates the basic behaviour of periodic threads. It
 * shows how to setup a thread for the periodic execution of the
 * runnable logic, and the preferred way of synchronizing with the
 * beginning of the period.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class DeadlineMissHandlerDemo {

    private static final int N = 20;

    public static void main(String[] args) {

        if (args.length == 0) {
            System.out.println("Usage:\n\tdeadlineMissHandlerDemo <period-ms> <busy-iterations>\n");
            System.exit(1);
        }
        final int period = Integer.parseInt(args[0]);
        final int busyIterations = Integer.parseInt(args[1]);
        
        Runnable demoLogic = new Runnable() {
                public void run() {
                    RealtimeThread rtThread =
                        RealtimeThread.currentRealtimeThread();
                    Clock clock = Clock.getRealtimeClock();
                    boolean retVal;
                    for (int i = 0; i < N; ++i) {
                        // It is good to start the processing at the
                        // "next" release of the period to make sure
                        // that we have all the period for "our"
                        // processing.
                        retVal = rtThread.waitForNextPeriod(); 
                        System.out.println("\tPeriod: " + i);
                        // Do your periodic logic here
                        if (i%2 == 0) {
                            for (int c = 0; c < busyIterations; ++c) {
                                for (int k = 0; k < 1000000; ++k) { }
                            }

                        }
                    }
                }
            };

        DeadlineMissHandlerLogic handlerLogic = new DeadlineMissHandlerLogic();

        BoundAsyncEventHandler deadlineMissHandler =
            new BoundAsyncEventHandler(null,
                                       null,
                                       null,
                                       null,
                                       null,
                                       handlerLogic);
        
        PeriodicParameters releaseParams =
            new PeriodicParameters(new RelativeTime(0, 0),    // Start
                                   new RelativeTime(period, 0), // Period
                                   new RelativeTime(period/2, 0),  // Cost
                                   new RelativeTime(period, 0), // Deadline
                                   null,          // overrun handler
                                   deadlineMissHandler); // miss handler 
                                   
        RealtimeThread rtThread = new RealtimeThread(null,
                                                     releaseParams,
                                                     null,
                                                     null,
                                                     null,
                                                     demoLogic);

        handlerLogic.setRealtimeThread(rtThread);
        
        System.out.println(">> Starting Periodic Computation");
        rtThread.start();
        
        try {
            rtThread.join();
        } catch (InterruptedException e) { }
        System.out.println(">> Periodic Computation Completed");
    }
}
