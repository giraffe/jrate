// ************************************************************************
//    $Id: RealtimeClockPeriodicTimerImpl.java 416 2004-02-22 18:35:45Z corsaro $
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

class RealtimeClockPeriodicTimerImpl implements PeriodicTimerImpl {

    private PeriodicTimer    owner;
    private RealtimeThread   rtThread;
    private AbsoluteTime     startTime;
    private RelativeTime     period;

    private boolean   isEnabled   = false;
    private boolean   isDone      = false;
    private boolean   isStarted   = false;
    class TimerLogic implements Runnable {
        public void run() {
            while (!isDone) {
                RealtimeClockPeriodicTimerImpl.this.rtThread.waitForNextPeriod();
                if (RealtimeClockPeriodicTimerImpl.this.isEnabled)
                    RealtimeClockPeriodicTimerImpl.this.owner.fire();
            }
        }
    }
    
    RealtimeClockPeriodicTimerImpl(PeriodicTimer timer,
                                   RelativeTime  start,
                                   RelativeTime  interval)
    {
        this.owner = timer; 

        rtThread = new RealtimeThread(null,
                                      new PeriodicParameters(start,
                                                             interval,
                                                             new RelativeTime(1, 0),
                                                             interval,
                                                             null,
                                                             null),
                                      null,
                                      null,
                                      null,
                                      new TimerLogic()); 
    }

    public synchronized void start() {
        if (this.isStarted == false) {
            this.isEnabled = true;
            this.isStarted = true;
            this.rtThread.start();

        }
    }

    public void enable() {
        this.isEnabled = true;
    }

    public void disable() {
        this.isEnabled = false;
    }

    public void destroy() {
        this.isDone = true;
    }

    public boolean isRunning() {
        return this.isDone && this.isEnabled;
    }

    public boolean stop() {
        boolean retVal = this.isEnabled;
        this.isEnabled = false;
        return retVal;
    }

    public AbsoluteTime getFireTime() {
        throw new UnimplementedFeatureError("Not Implemented in this versionf of jRate!");
    }

    public ReleaseParameters createReleaseParameters() {
        return rtThread.getReleaseParameters();
    }

    public RelativeTime getInterval() {
        PeriodicParameters pp = (PeriodicParameters)this.rtThread.getReleaseParameters();
        return pp.getPeriod();
    }

    public void setInterval(RelativeTime interval) {
        PeriodicParameters pp = (PeriodicParameters)this.rtThread.getReleaseParameters();
        pp.setPeriod(interval);
        pp.setDeadline(interval);
        this.rtThread.setReleaseParameters(pp);
    }

    public void reschedule(HighResolutionTime time) {
        throw new UnimplementedFeatureError("Not Implemented in this versionf of jRate!");
    }
}
