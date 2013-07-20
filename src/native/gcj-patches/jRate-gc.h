// ************************************************************************
//    $Id: jRate-gc.h 527 2005-04-01 21:28:33Z mdeters $
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
#ifndef __JV_JRATE_GC_H_
#define __JV_JRATE_GC_H_

#include <jrate/binding/java/Types.h>
#include <javax/realtime/IllegalAssignmentError.h>

extern ::jrate::binding::java::IMemoryArea_t* theMethodArea;
extern ::jrate::binding::java::IMemoryArea_t* theHeap;
extern ::jrate::binding::java::IMemoryArea_t* theImmortalMemory;
extern ::jrate::binding::java::IMemoryArea_t* theDefaultMemoryRegion;
extern ::javax::realtime::IllegalAssignmentError *theIllegalAssignmentError;

/* A no-op type, effectively... */
typedef void (*GC_finalization_proc)(void*,void*);

inline ::javax::realtime::IllegalAssignmentError*
jRateIllegalAssignmentError() { return theIllegalAssignmentError; }

inline ::jrate::binding::java::IMemoryArea_t*
jRateGetMethodArea() { return theMethodArea; }

inline ::jrate::binding::java::IMemoryArea_t*
jRateGetHeapMemory() { return theHeap; }

inline ::jrate::binding::java::IMemoryArea_t*
jRateGetImmortalMemory() { return theImmortalMemory; }

inline ::jrate::binding::java::IMemoryArea_t*
jRateGetDefaultMemoryRegion() { return theDefaultMemoryRegion; }


inline void
jRateSetMethodArea(::jrate::binding::java::IMemoryArea_t* ma) {
    theMethodArea = ma;
}

inline void 
jRateSetHeapMemory(::jrate::binding::java::IMemoryArea_t* ma) {
    theHeap = ma;
}

inline void
jRateSetImmortalMemory(::jrate::binding::java::IMemoryArea_t* ma) {
    theImmortalMemory = ma;
}

inline void
jRateSetDefaultMemoryRegion(::jrate::binding::java::IMemoryArea_t* ma) {
    theDefaultMemoryRegion = ma;
}

void jRateInitMemorySubSystem();

void jRateInitExceptionObjects();

void jRateSetupDefaultAllocationContext();

#endif // __JV_JRATE_GC_H_
