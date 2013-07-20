#include <jrate/jRate.h>
#include <jrate/binding/java/IMemoryArea.h>

#include <javax/realtime/MemoryArea.h>
#include <javax/realtime/Arena.h>
#include <javax/realtime/IllegalAssignmentError.h>

#include <gcj/cni.h>


::java::lang::Object*
javax::realtime::Arena::getPortal() {
    return MEM_AREA(this)->getPortal();
}

void
javax::realtime::Arena::setPortal(::java::lang::Object* portal) {
    if (portal == 0)
        return;

    // The condition that we enforce for portals is that the object
    // being set as portal is allocated in a reference-able scope
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
