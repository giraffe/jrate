// ************************************************************************
//    $Id: SchedulingParameters.java 416 2004-02-22 18:35:45Z corsaro $
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
 * Subclasses of SchedulingParameters ( {@link PriorityParameters},
 * {@link ImportanceParameters}, and any others defined for particular
 * schedulers) provide the parameters to be used by the {@link Scheduler}. 
 * Changes to the values in a parameters object affects the scheduling
 * behavior of all the {@link Schedulable} objects to which it is bound. <br><br>
 *
 * <b>Caution:</b> Subclasses of this class are explicitly unsafe in
 * multithreaded situations when they are being changed. No
 * synchronization is done. It is assumed that users of this class who
 * are mutating instances will be doing their own synchronization at a
 * higher level.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 * @see javax.realtime.Scheduler
 */
public abstract class SchedulingParameters {

}
