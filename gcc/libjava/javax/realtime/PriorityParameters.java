// ************************************************************************
//    $Id: PriorityParameters.java 527 2005-04-01 21:28:33Z mdeters $
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
 * Instances of this class should be assigned to threads that are
 * managed by schedulers which use a single integer to determine
 * execution order. The base scheduler required by this specification
 * and represented by the class {@link PriorityScheduler} is such a
 * scheduler.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class PriorityParameters extends SchedulingParameters {

    protected int priority;
    
    /**
     * Create an instance of SchedulingParameters with the given
     * priority.
     *
     * @param priority The priority assigned to a thread. This value
     * is used in place of the value returned by
     * java.lang.Thread.setPriority(int)
     * @exception IllegalArgumentException Thrown if the given
     * priority value is less than the minimum priority of the
     * scheduler of any of the associated threads or greater then the
     * maximum priority of the scheduler of any of the associated
     * threads.
     */
    public PriorityParameters(int priority) throws IllegalArgumentException {
        this.priority = priority;
    }

    /**
     * Gets the priority.
     *
     * @return the priority value.
     */
    public int getPriority() {
        return this.priority;
    }


    /**
     * Sets the priority.
     *
     * @param priority the new priority.
     * @exception IllegalArgumentException Thrown if the given
     * priority value is less than the minimum priority of the
     * scheduler of any of the associated threads or greater then the
     * maximum priority of the scheduler of any of the associated
     * threads.
     */
    public void setPriority(int priority) throws IllegalArgumentException {
        this.priority = priority;
    }

    public String toString() {
        return "Priority Parameters: " + this.priority;
    }
}
