// ************************************************************************
//    $Id: CTMemory.cc 416 2004-02-22 18:35:45Z corsaro $
// ************************************************************************

//
// NOTE: The OutOfMemoryException is not actually allocated here, but
// a global exception object is used instead. This is provided by the
// GCJ runtime. Using a global object allow us to avoid the issues of
// where to allocate the ExceptionObject itself.

#pragma GCC java_exceptions

#include <jvm.h>
#include <gcj/cni.h>

#include <javax/realtime/CTMemory.h>
#include <java/lang/OutOfMemoryError.h> 
#include <jrate/jRate.h>
#include <jrate/binding/java/CTMemory.h>

#define thisMemArea ((jrate::binding::java::CTMemory_t*)ma_)

jlong
javax::realtime::CTMemory::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::CTMemory::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::CTMemory::init() {
    JRATE_LOG(("[jRate<CTMemory>]: init\n"));
    // TODO: Change this to use a placement new!
    jrate::binding::java::CTMemory_t* ctm =
        new jrate::binding::java::CTMemory_t(this->sizeInBytes,
                                             this->sizeInBytes);
    ::jrate::binding::java::ObjectInitializer< javax::realtime::CTMemory >
          objInitializer(this);
    ctm->setObjectInitializer(objInitializer);
    ctm->setPeer(this);
    this->ma_ = (gnu::gcj::RawData*)ctm;
    
    JRATE_LOG(("[jRate<CTMemory::init()>]: ImmortalMemory at %p\n", ctm));
    JRATE_LOG(("[jRate<CTMemory::init()>]: Java ImmortalMemory Wrapper at  %p\n", this)); 
    
    if (__builtin_expect(this->ma_ == 0, false))
        _Jv_ThrowNoMemory();
}

void
javax::realtime::CTMemory::fini() {
    JRATE_LOG(("[jRate<CTMemory>]: fini()\n"));
//    delete thisMemArea; 
}
