// ************************************************************************
//    $Id: PeriodicParametersDemo.java 527 2005-04-01 21:28:33Z mdeters $
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
import javax.realtime.PeriodicParameters;
import javax.realtime.AbsoluteTime;
import javax.realtime.RelativeTime;
import javax.realtime.Clock;

/**
 * This class illustrates how periodic parameters can be changed to
 * change dynamically the period of a periodic thread.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PeriodicParametersDemo {

    private static final int N = 100;

    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("Usage:\n\tperiodicParametersDemo <perdiod msec> " +
                               "<increment msec>\n");
            System.exit(1);
        }
        
        final int period = Integer.parseInt(args[0]);
        final int increment = Integer.parseInt(args[1]);
        
        final RelativeTime T = new RelativeTime(period, 0);
        final RelativeTime delta = new RelativeTime(increment, 0);

        final PeriodicParameters releaseParams =
            new PeriodicParameters(new RelativeTime(0, 0),
                                   T,
                                   new RelativeTime(450, 0),
                                   T,
                                   null,
                                   null);

        if (period <= 0) {
            System.out.println("The period must be a positive number\n");
            System.exit(1);
        }
        
        Runnable demoLogic = new Runnable() {
                public void run() {
                    RealtimeThread rtThread =
                        RealtimeThread.currentRealtimeThread();
                    Clock clock = Clock.getRealtimeClock();
                    boolean retVal;
                    System.out.println("\n\tPeriod: " + T + " msec");
                    for (int i = 0; i < N; ++i) {
                        // It is good to start the processing at the
                        // "next" release of the period to make sure
                        // that we have all the period for "our"
                        // processing.
                        retVal = rtThread.waitForNextPeriod();
                        
                        // Do your periodic logic here 
                        System.out.print("\t\t[" + i + "]\t");
                        AbsoluteTime currentTime = clock.getTime(); 
                        System.out.println(currentTime.getMilliseconds()
                                           + " ms    "
                                           + currentTime.getNanoseconds() + " ns");
                        
                        if ((i+1)%10 == 0 && (i+1) != N) {
                            T.increment(delta);
                            releaseParams.setPeriod(T);
                            releaseParams.setDeadline(T);
                            rtThread.setReleaseParameters(releaseParams);
                            System.out.println("\n\tPeriod: " + T + " msec");
                        }        
                        
                    }
                }
            };

                                   
        RealtimeThread rtThread = new RealtimeThread(null,
                                                     releaseParams,
                                                     null,
                                                     null,
                                                     null,
                                                     demoLogic);
        
        System.out.println(">> Starting Periodic Computation");
        rtThread.start();
        
        try {
            rtThread.join();
        } catch (InterruptedException e) { }
        System.out.println(">> Periodic Computation Completed");
    }
}
