// ************************************************************************
//    $Id: ImportanceParameters.java 416 2004-02-22 18:35:45Z corsaro $
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
 * Importance is an additional scheduling metric that may be used by
 * some priority-based scheduling algorithms during overload
 * conditions to differentiate execution order among threads of the
 * same priority. In some real-time systems an external physical
 * process determines the period of many threads. If rate-monotonic
 * priority assignment is used to assign priorities many of the
 * threads in the system may have the same priority because their
 * periods are the same. However, it is conceivable that some threads
 * may be more important than others and in an overload situation
 * importance can help the scheduler decide which threads to execute
 * first. The base scheduling algorithm represented by {@link
 * PriorityScheduler} is not required to use importance. However, the
 * RTSJ strongly suggests to implementers that a fairly simple
 * subclass of {@link PriorityScheduler} that uses importance can
 * offer value to some real-time applications.
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
public class ImportanceParameters extends PriorityParameters {

    protected int importance;
    
    /**
     * Create aninstance of <code>ImportanceParameters</code>.
     *
     * @param priority The priority assigned to a thread. This value
     * is used in place of the value returned by
     * java.lang.Thread.setPriority(int)
     * @param importance The importance value assigned to a thread.
     * @exception IllegalArgumentException Thrown if the given
     * priority value is less than the minimum priority of the
     * scheduler of any of the associated threads or greater then the
     * maximum priority of the scheduler of any of the associated
     * threads.
     */
    public ImportanceParameters(int priority, int importance)
        throws IllegalArgumentException
    {
        super(priority);
        this.importance = importance;
    }

    /**
     * Gets the importance value.
     *
     * @return the importance value.
     */
    public int getImportance() {
        return this.importance;
    }

    /**
     * Sets the importance value.
     *
     * @param importance the new importance value.
     */
    public void setImportance(int importance) {
        this.importance = importance;
    }

    public String toString() {
        return "Importance Parameters: " + this.priority + ", " + this.importance;
    }
}
