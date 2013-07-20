// ************************************************************************
//    $Id: LTPrivateMemory.cc 412 2003-11-16 13:49:38Z corsaro $
// ************************************************************************

#include <jvm.h>
#include <javax/realtime/LTPrivateMemory.h>

#include <jrate/jRate.h>
#include <jrate/binding/java/LTPrivateMemory.h>

#define thisMemArea ((jrate::binding::java::LTPrivateMemory_t *)this->ma_)


jlong
javax::realtime::LTPrivateMemory::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::LTPrivateMemory::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::LTPrivateMemory::init() {
    JRATE_LOG(("[jRate<LTPrivateMemory>]: init\n"));
    // TODO: Change this to use a placement new!
    jrate::binding::java::LTPrivateMemory_t* lta =
        new jrate::binding::java::LTPrivateMemory_t(this->sizeInBytes,
                                             this->sizeInBytes);

    ::jrate::binding::java::ObjectInitializer< javax::realtime::LTPrivateMemory >
          objInitializer(this); 
    lta->setObjectInitializer(objInitializer);

    lta->setPeer(this);
    this->ma_ = (gnu::gcj::RawData*)lta;

    if (__builtin_expect(this->ma_ == 0, false))
        _Jv_ThrowNoMemory();
}

void
javax::realtime::LTPrivateMemory::fini() {
    JRATE_LOG(("[jRate<LTPrivateMemory>]: fini()\n"));
    delete thisMemArea;
}

