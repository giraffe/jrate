// ************************************************************************
//    $Id: ExecutionEligibilityParameters.java 416 2004-02-22 18:35:45Z corsaro $
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
 * This class, at each moment in time, represents the execution
 * eligibility of a given {@link Schedulable} entity. The execution
 * eligibility is represented with an integer, that can be easily
 * mapped to an OS priority. This class is used by this implementation
 * of the RTSJ to express eligibility of activities scheduled with
 * dynamic scheduling algoriths such as EDF in term of OS priorities.<p>
 *
 * <b>Note:</b> This is not a standard RTSJ class and is an helper
 * class used internally by this implementation.
 *
 *
 * @author <a href="mailto:corsaro@cse.wustl.edu">Angelo Corsaro</a>
 * @version 1.0
 */
class ExecutionEligibilityParameters {

    private int eligibility;

    /**
     * Creates a new <code>ExecutionEligibilityParameters</code> instance.
     *
     * @param eligibility an <code>int</code> value representing the initial execution eligibility.
     */
    public ExecutionEligibilityParameters(int eligibility) {
        this.eligibility = eligibility;
    }

    /**
     * Creates a new <code>ExecutionEligibilityParameters</code>
     * instance. In this case the eligibility data member is
     * initialized to the value expressed by the PriorityScheduler.NORM_PRIORITY
     *
     */
    public ExecutionEligibilityParameters() {
        this.eligibility = PriorityScheduler.NORM_PRIORITY;
    }

    
    /**
     * Get the execution eligibility.
     *
     * @return an <code>int</code> value representing the execution
     * eligibility.
     */
    public int getExecutionEligibility() {
        return this.eligibility;
    }

    /**
     * Set the execution eligibility.
     *
     * @param eligibility an <code>int</code> value an
     * <code>int</code> value representing the execution eligibility.
     */
    public void setExecutionEligibility(int eligibility) {
        this.eligibility = eligibility;
    }
    
}
