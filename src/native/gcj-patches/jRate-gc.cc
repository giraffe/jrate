// ************************************************************************
//    $Id: jRate-gc.cc 527 2005-04-01 21:28:33Z mdeters $
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
#include <config.h>

#include <stdio.h>
#include <stdlib.h>

#include <gcj/cni.h>
#include <jvm.h>

#include <jRate-gc.h>

::jrate::binding::java::IMemoryArea_t* theMethodArea = 0;
::jrate::binding::java::IMemoryArea_t* theHeap = 0;
::jrate::binding::java::IMemoryArea_t* theImmortalMemory = 0;
::jrate::binding::java::IMemoryArea_t* theDefaultMemoryRegion = 0;
::javax::realtime::IllegalAssignmentError *theIllegalAssignmentError = 0;

void
jRateInitExceptionObjects() {
    theIllegalAssignmentError =
        new ::javax::realtime::IllegalAssignmentError();
}

void
jRateInitMemorySubSystem() {
    char * memSize = getenv("JRATE_METHOD_MEMORY_SIZE");
    unsigned int size;
    if (memSize != 0) {
        sscanf(memSize, "%d", &size);
        size = size << 20;
    }
    else
        size = 16 << 20;

    ::jrate::binding::java::IMemoryArea_t* ma =
          new ::jrate::binding::java::MethodArea_t(size, size);

    jRateSetMethodArea(ma);
    jRateSetDefaultMemoryRegion(ma);

    ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t > ().set
          (jRateGetDefaultMemoryRegion());
}


void
jRateSetupDefaultAllocationContext() {
    ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().set
          (jRateGetDefaultMemoryRegion());
}
void*
_Jv_BuildGCDescr(jclass)
{
    return 0;
}

void *
_Jv_AllocObj (jsize size, jclass klass)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    jobject obj = ma->allocateObject(size, klass);
    return obj;
}

void *
_Jv_AllocPtrFreeObj (jsize size, jclass klass)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    jobject obj = ma->allocatePtrFreeObject(size, klass);
    return obj;
}

void *
_Jv_AllocArray (jsize size, jclass klass)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    jobject obj = ma->allocateObject(size, klass);
    return obj;
}

void *
_Jv_AllocBytes (jsize size)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    void* obj = ma->allocateBytes(size);
    return obj;
}

void *
_Jv_AllocRawObj (jsize size)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    void* obj = ma->allocateRawData(size); //calloc (size, 1);
    return obj;
}

void
_Jv_RegisterFinalizer (void *, _Jv_FinalizerFunc *)
{
    // FIXME: should actually register so that finalizers can be run on
    // exit.
}

void
_Jv_RunFinalizers (void)
{
}

void
_Jv_RunAllFinalizers (void)
{
    // FIXME: should still run all finalizers.
}

void
_Jv_GCInitializeFinalizers (void (*) (void))
{
}

void
_Jv_RunGC (void)
{
}

long
_Jv_GCTotalMemory (void)
{
    return jRateGetHeapMemory()->totalMemory();
}

long
_Jv_GCFreeMemory (void)
{
    return jRateGetHeapMemory()->availableMemory();
}

void
_Jv_GCSetInitialHeapSize (size_t)
{
}

void
_Jv_GCSetMaximumHeapSize (size_t)
{
}

void
_Jv_DisableGC (void)
{
}

void
_Jv_EnableGC (void)
{
}

void
_Jv_InitGC (void)
{
}

void
_Jv_GCRegisterDisappearingLink (jobject *)
{
}

jboolean
_Jv_GCCanReclaimSoftReference (jobject)
{
    // For now, always reclaim soft references.  FIXME.
    return true;
}

#ifdef JV_HASH_SYNCHRONIZATION
void *
_Jv_AllocTraceOne (jsize size /* includes vtable slot */)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    void* obj = ma->allocateBytes(size);
    return obj;
}

void *
_Jv_AllocTraceTwo (jsize size /* includes vtable slot */)
{
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    void* obj = ma->allocateBytes(size);
    return obj;
}
#endif /* JV_HASH_SYNCHRONIZATION */
