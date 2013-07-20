// ************************************************************************
//    $Id: PeriodicTimerImpl.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The interface <code>PeriodicTimerImpl</code> defines the protocol
 * supported by periodic timers implementations. Implementations of
 * these interface are provided by factory methods available on the
 * {@link javax.realtime.Clock} class.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
interface PeriodicTimerImpl extends TimerImpl {

    /**
     * Return the interval of this Timer.
     *
     * @return a <code>RelativeTime</code> object which is the current
     * interval of this
     */
    RelativeTime getInterval();
    

    /**
     * Set the interval for this periodic timer
     *
     * @param interval a <code>RelativeTime</code> representing the
     * new interval
     */
    void setInterval(RelativeTime interval);
}
