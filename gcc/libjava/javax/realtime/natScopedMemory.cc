// ************************************************************************
//    $Id: ScopedMemory.cc 474 2005-01-24 11:03:10Z mdeters $
// ************************************************************************

//  #include <jvm.h>
#include <gcj/cni.h>
#include <jrate/jRate.h>
#include <jrate/binding/java/IMemoryArea.h>

#include <javax/realtime/MemoryArea.h>
#include <javax/realtime/ScopedMemory.h>
#include <javax/realtime/IllegalAssignmentError.h>
#include <javax/realtime/InaccessibleAreaException.h>

jint
javax::realtime::ScopedMemory::getReferenceCount() {
    ::jrate::binding::java::IMemoryArea_t* ma = MEM_AREA(this);
    
    return ma->referenceCount();
}

void
javax::realtime::ScopedMemory::setPortal(::java::lang::Object* portal) {
    // spec says if you setPortal(null), portal doesn't change
    if (portal == 0)
        return;

    // The condition that we enforce for portals is that the object
    // being set as portal is allocated in a reference-able scope.
    // NOTE: the spec doesn't explicitly make such restrictions.
    // The Timesys implementation enforces a stronger condition than
    // we do here: they require the portal object to be allocated *in*
    // the memory area (not just a guaranteed-to-be-live one).
    ::javax::realtime::MemoryArea* ma =
          ::javax::realtime::MemoryArea::getMemoryArea(portal);

    ::jrate::binding::java::IMemoryArea_t* thisMA = MEM_AREA(this);
    ::jrate::binding::java::IMemoryArea_t* portalMA = MEM_AREA(ma);

    if (portalMA->checkReferenceFrom(thisMA))
        portalMA->setPortal(portal);
    else
        throw new javax::realtime::IllegalAssignmentError
            (JvNewStringUTF("Non-Referentiable Portal Object"));
}


::java::lang::Object*
javax::realtime::ScopedMemory::getPortal() {
    // NOTE: spec doesn't mention this, but if you aren't required to be
    // *in* a scope when you get its portal, the retrieved portal
    // reference (on the thread stack) could dangle if the scope is
    // exited by all the threads that have entered it.  So, without a
    // check, this is an unsafe operation.  Again, the spec doesn't say
    // anything about this, but the Timesys implementation does appear
    // to do such a check, and throws an InaccessibleAreaException if
    // you aren't in the scope.

    ::jrate::binding::java::IMemoryArea_t* thisMA = MEM_AREA(this);
    ::jrate::binding::java::IMemoryArea_t* curMA =
        ::jrate::sys::getTSS< ::jrate::sched::TSS< ::jrate::binding::java::IMemoryArea_t > >().get();

    // check to see if this thread has entered thisMA
    if(!thisMA->checkReferenceFrom(curMA))
        throw new javax::realtime::InaccessibleAreaException();

    return MEM_AREA(this)->getPortal();
}
