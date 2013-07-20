// ************************************************************************
//    $Id: HighResolutionTimer.java 416 2004-02-22 18:35:45Z corsaro $
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

package javax.realtime;


/**
 * This class provide a way of performing high resolution of the time
 * spent performing something.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class HighResolutionTimer {
    
    long startClockTick;
    long stopClockTick;
    HighResolutionClock clock = new HighResolutionClock();
    
    /**
     * Starts measuring the elapsed time.
     *
     */
    public void start() {
        this.startClockTick = clock.getClockTickCount();
    }
    
    /**
     * Stops the time measurement.
     *
     */
    public void stop() {
        this.stopClockTick = clock.getClockTickCount();
    }


    /**
     * Resets the timer.
     *
     */
    public void reset() {
        this.startClockTick = this.stopClockTick = 0;
    }

    public RelativeTime  getElapsedTime() {
        return clock.clockTickToTime(this.stopClockTick - this.startClockTick);
    }

    public void getElapsedTime(RelativeTime time) {
        clock.clockTickToTime(this.stopClockTick - this.startClockTick, time);
    }

}
