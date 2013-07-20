// ************************************************************************
//    $Id: PeriodicTimerDemo.java 416 2004-02-22 18:35:45Z corsaro $
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
import javax.realtime.util.EventVariable;

public class PeriodicTimerDemo {

    static int fireCount = 0;
    
    public static void main(String[] args) {
        if (args.length < 3) {
            System.out.println("USAGE:\n\tperiodicTimerDemo <count> <millis> <nanos>\n");
            System.exit(1);
        }
        
        final int count = Integer.parseInt(args[0]);
        int millis = Integer.parseInt(args[1]); // time in msec
        int nanos = Integer.parseInt(args[2]);
        
        final EventVariable event = new EventVariable();
        final Clock clock = HighResolutionClock.instance();
        final AbsoluteTime time = new AbsoluteTime();
        Runnable logic = new Runnable() {
                public void run() {
                    clock.getTime(time);
                    System.out.print("\t");
                    System.out.print("[" + fireCount + "]   ");
                    System.out.println(time);
                    fireCount++;
                    if (fireCount >= count) {
                        event.signal();
                    }
                }
            };

        TimeoutHandler handler = new TimeoutHandler(null, null, null, null, null, false,
                                                    logic);
        
        PeriodicTimer ptimer =
            new PeriodicTimer(new RelativeTime(0, 0), // start
                              new RelativeTime(millis, nanos), // period
                             handler);
        
        ptimer.start();
        try {
            event.await();
            ptimer.stop();
            ptimer.destroy();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
    }
    
}
