// ************************************************************************
//    $Id: OneShotTimerImpl.java 416 2004-02-22 18:35:45Z corsaro $
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
 * The interface <code>OneShotTimerImpl</code> defines the protocol
 * supported by one shot timers implementations. Implementations of
 * these interface are provided by factory methods available on the
 * {@link javax.realtime.Clock} class.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
interface OneShotTimerImpl extends TimerImpl {

    /*
     * This interface does not currently define any additional mehtod
     * respect to the TimerImpl and it is used just to make it easier
     * to provide private protocols in the future between the
     * OneShotTimer and its  delegate OneShotTimerImpl
     */
}
