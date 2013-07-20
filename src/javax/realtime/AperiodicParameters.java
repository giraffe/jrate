// ************************************************************************
//    $Id: AperiodicParameters.java 467 2004-12-22 21:58:06Z mdeters $
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
 * This release parameter object characterizes a schedulable object
 * that may become active at any time. When a reference to a
 * <code>AperiodicParameters</code> object is given as a parameter to
 * a constructor the <code>AperiodicParameters</code> object becomes
 * bound to the object being created. Changes to the values in the
 * <code>AperiodicParameters</code> object affect the constructed
 * object. If given to more than one constructor then changes to the
 * values in the <code>AperiodicParameters</code> object affect all of
 * the associated objects. Note that this is a one-to-many
 * relationship and not a many-to-many.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class AperiodicParameters extends ReleaseParameters {

    /**
     * Creates a new <code>AperiodicParameters</code> instance.
     *
     * @param cost Processing time per period. On implementations
     * which can measure the amount of time a schedulable object is
     * executed, this value is the maximum amount of time a
     * schedulable object receives per period. On implementations
     * which cannot measure execution time, this value is used as a
     * hint to the feasibility algorithm. On such systems it is not
     * possible to determine when any particular object exceeds or
     * will exceed cost time units in a period. Equivalent to
     * <code>RelativeTime(0,0)</code> if null.
     * @param deadline The latest permissible completion time measured
     * from the release time of the associated invocation of the
     * schedulable object. For a minimum implementation for purposes
     * of feasibility analysis, the deadline is equal to the period. 
     * Other implementations may use this parameter to compute
     * execution eligibility. If null, deadline will equal the period.
     * @param overrunHandler This handler is invoked if an invocation
     * of the schedulable object exceeds cost in the given period. Not
     * required for minimum implementation. If null, nothing happens
     * on the overrun condition.
     * @param missHandler This handler is invoked if the
     * <code>run()</code> method of the schedulable object is still
     * executing after the deadline has passed. Although minimum
     * implementations do not consider deadlines in feasibility
     * calculations, they must recognize variable deadlines and invoke
     * the miss handler as appropriate. If null, nothing happens on
     * the miss deadline condition.
     */
    public AperiodicParameters(RelativeTime cost,
                               RelativeTime deadline,
                               AsyncEventHandler overrunHandler,
                               AsyncEventHandler missHandler) {
        super(cost, deadline, overrunHandler, missHandler);
    }


    /**
     * Attempt to change the cost and deadline. The values will be
     * changed if the resulting system is feasible. If the resulting
     * system would not be feasible no changes are made.
     *
     * @param cost The proposed cost. If zero, no change is made.
     * @param deadline The proposed deadline. If zero, no change is
     * made.
     * @return <code>true</code> if the resulting system is feasible
     * and the changes are made. false if the resulting system is not
     * feasible and no changes are made.
     */
    public boolean setIfFeasible(RelativeTime cost, RelativeTime deadline) {
        // FIXME: Implements this once the scheduler is in place.
        return false;
    }

}
