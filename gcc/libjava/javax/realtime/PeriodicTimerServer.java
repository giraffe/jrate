// ************************************************************************
//    $Id: PeriodicTimerServer.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This interface has to be implemented by periodic timer server. 
 * Timer server provide a way of implementing <code>Timer</code>s in
 * many different way. 
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
interface PeriodicTimerServer {

    
    /**
     * Registers the timer with the server. The firing of the timer
     * will be started once the timer has beend scheduled (see
     * <code>schedule()</code> method).
     *
     * @param timer a <code>PeriodicTimer</code> 
     */
    void registerTimer(PeriodicTimer timer);

    /**
     * Unregisters a timer. Once a timer is unregistered it won't be
     * any longer fired.
     *
     * @param timer a <code>PeriodicTimer</code> 
     */
    void unregisterTimer(PeriodicTimer timer);

    /**
     * Schedules a timer of firing.
     *
     * @param timer a <code>PeriodicTimer</code> 
     */
    void schedule(PeriodicTimer timer);

    /**
     * Deschedules a timer. The timer will still remain registered but
     * it won't be fired up to when it won't be scheduled again.
     *
     * @param timer a <code>PeriodicTimer</code> 
     */
    void deschedule(PeriodicTimer timer);

}
