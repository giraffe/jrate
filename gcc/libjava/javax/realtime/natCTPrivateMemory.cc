// ************************************************************************
//    $Id: CTPrivateMemory.cc 412 2003-11-16 13:49:38Z corsaro $
// ************************************************************************

//
// NOTE: The OutOfMemoryException is not actually allocated here, but
// a global exception object is used instead. This is provided by the
// GCJ runtime. Using a global object allow us to avoid the issues of
// where to allocate the ExceptionObject itself.

#pragma GCC java_exceptions

#include <jvm.h>
#include <gcj/cni.h>

#include <javax/realtime/CTPrivateMemory.h>
#include <java/lang/OutOfMemoryError.h> 
#include <jrate/jRate.h>
#include <jrate/binding/java/CTPrivateMemory.h>

#define thisMemArea ((jrate::binding::java::CTPrivateMemory_t*)ma_)

jlong
javax::realtime::CTPrivateMemory::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::CTPrivateMemory::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::CTPrivateMemory::init() {
    JRATE_LOG(("[jRate<CTPrivateMemory>]: init\n"));
    // TODO: Change this to use a placement new!
    jrate::binding::java::CTPrivateMemory_t* ctm =
        new jrate::binding::java::CTPrivateMemory_t(this->sizeInBytes,
                                             this->sizeInBytes);
    ::jrate::binding::java::ObjectInitializer< javax::realtime::CTPrivateMemory >
          objInitializer(this);
    ctm->setObjectInitializer(objInitializer);
    ctm->setPeer(this);
    this->ma_ = (gnu::gcj::RawData*)ctm;
    
    JRATE_LOG(("[jRate<CTPrivateMemory::init()>]: ImmortalMemory at %p\n", ctm));
    JRATE_LOG(("[jRate<CTPrivateMemory::init()>]: Java ImmortalMemory Wrapper at  %p\n", this)); 
    
    if (__builtin_expect(this->ma_ == 0, false))
        _Jv_ThrowNoMemory();
}

void
javax::realtime::CTPrivateMemory::fini() {
    JRATE_LOG(("[jRate<CTPrivateMemory>]: fini()\n"));
    delete thisMemArea; 
}
