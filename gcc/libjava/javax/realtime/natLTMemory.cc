// ************************************************************************
//    $Id: LTMemory.cc 416 2004-02-22 18:35:45Z corsaro $
// ************************************************************************

#include <jvm.h>
#include <javax/realtime/LTMemory.h>

#include <jrate/jRate.h>
#include <jrate/binding/java/LTMemory.h>

#define thisMemArea ((jrate::binding::java::LTMemory_t *)this->ma_)


jlong
javax::realtime::LTMemory::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::LTMemory::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::LTMemory::init() {
    JRATE_LOG(("[jRate<LTMemory>]: init\n"));
    // TODO: Change this to use a placement new!
    jrate::binding::java::LTMemory_t* lta =
        new jrate::binding::java::LTMemory_t(this->sizeInBytes,
                                             this->sizeInBytes);

    ::jrate::binding::java::ObjectInitializer< javax::realtime::LTMemory >
          objInitializer(this); 
    lta->setObjectInitializer(objInitializer);

    lta->setPeer(this);
    this->ma_ = (gnu::gcj::RawData*)lta;

//     if (__builtin_expect(this->ma_ == 0, false))
//         _Jv_ThrowNoMemory();
}

void
javax::realtime::LTMemory::fini() {
    JRATE_LOG(("[jRate<LTMemory>]: fini()\n"));
//    delete thisMemArea;
}

