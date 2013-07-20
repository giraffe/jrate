// ************************************************************************
//    $Id: POSIXSignalHandler.java 467 2004-12-22 21:58:06Z mdeters $
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

import gnu.gcj.RawData;

/**
 * The class <code>POSIXSignalHandler</code> provides a way of
 * handling POSIX signals by means of <code>AsyncEventHandler</code>.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public final class POSIXSignalHandler {

    public static final int SIGHUP	=   1; 
    public static final int SIGINT	=   2;
    public static final int SIGQUIT	=   3; 
    public static final int SIGILL	=   4;  
    public static final int SIGTRAP	=   5; 
    public static final int SIGABRT	=   6; 
    public static final int SIGIOT	=   6; 
    public static final int SIGBUS	=   7; 
    public static final int SIGFPE	=   8; 
    public static final int SIGKILL	=   9; 
    public static final int SIGUSR1	=   10;
    public static final int SIGSEGV	=   11;
    public static final int SIGUSR2	=   12;
    public static final int SIGPIPE	=   13;
    public static final int SIGALRM	=   14;
    public static final int SIGTERM	=   15;
    public static final int SIGSTKFLT   =   16;
    public static final int SIGCHLD	=   17;
    public static final int SIGCLD	=   SIGCHLD;
    public static final int SIGCONT	=   18;
    public static final int SIGSTOP	=   19;
    public static final int SIGTSTP	=   20;
    public static final int SIGTTIN	=   21;
    public static final int SIGTTOU	=   22;
    public static final int SIGURG	=   23;
    public static final int SIGXCPU	=   24;
    public static final int SIGXFSZ	=   25;
    public static final int SIGVTALRM   =   26;
    public static final int SIGPROF	=   27;
    public static final int SIGWINCH    =   28;
    public static final int SIGIO	=   29;
    public static final int SIGPOLL	=   SIGIO;
    public static final int SIGPWR	=   30;
    public static final int SIGSYS	=   31;
    public static final int SIGUNUSED   =   31;
    protected static final int SIGNUM   =   31;
    protected static final int SIGMIN   =   1;
    protected static final int SIGMAX   =   31;

    protected RawData natHandler_;
    protected RawData pipeID_;
    protected boolean enabled_ = true;
    protected AsyncEvent signalEvents[];
    protected RealtimeThread notificationThread;
    
    private static final PriorityParameters dispatcherPriority =
    new PriorityParameters(PriorityScheduler.MAX_PRIORITY);
        

    
    /**
     * Creates a new <code>POSIXSignalHandler</code> instance.
     *
     */
    public POSIXSignalHandler() {
        this.init();
        this.signalEvents = new AsyncEvent[SIGNUM];
        for (int i = 0; i < SIGNUM; ++i)
            this.signalEvents[i] = new AsyncEvent();

        Runnable dispatcherLogic = new Runnable() {
                public void run() {
                    POSIXSignalHandler.this.startDispatching();
                }
            };
        this.notificationThread = new RealtimeThread(dispatcherPriority,
                                                     null,
                                                     null,
                                                     null,
                                                     null,
                                                     dispatcherLogic);
    }
    

    /**
     * Adds a handler for the given signal.
     *
     * @param signum POSIX signal
     * @param handler The handler that will handle the given signal.
     */
    public void addHandler(int signum, AsyncEventHandler handler) {
        if (signum > SIGMAX || signum < SIGMIN)
            throw new IllegalArgumentException("Invalid Signal Number: " + signum);
        
        this.signalEvents[signum-1].addHandler(handler); 
    }

    /**
     * Removes the given handler for the given signal. 
     *
     * @param signum a POSIX signal number
     * @param handler the handler to be removed
     */
    public void removeHandler(int signum, AsyncEventHandler handler) {
        if (signum > SIGMAX || signum < SIGMIN)
            throw new IllegalArgumentException("Invalid Signal Number: " + signum);
        
        this.signalEvents[signum-1].removeHandler(handler); 
    }

    /**
     * Associate a new handler with the given POSIX signal, removing
     * all existing handlers. Since this affects the constraints
     * expressed in the release parameters of the existing schedulable
     * objects, this may change the feasibility of the current
     * schedule.
     *
     * @param signum POSIX signal
     * @param handler the new handler
     */
    public void setHandler(int signum, AsyncEventHandler handler) {
        if (signum > SIGMAX || signum < SIGMIN)
            throw new IllegalArgumentException("Invalid Signal Number: " + signum);
        
        this.signalEvents[signum-1].setHandler(handler); 

    }

    protected final void fireSignal(int signum) {
        this.signalEvents[signum-1].fire();
    }

    
    // -- Native Methods --
    protected native void startDispatching();

    protected native void init();
    protected native void fini();

    protected native void registerNativeHandler(int signum);
}
