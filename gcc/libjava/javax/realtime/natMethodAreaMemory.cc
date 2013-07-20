// ************************************************************************
//    $Id: MethodAreaMemory.cc 369 2003-06-28 18:45:51Z corsaro $
// ************************************************************************

#include <jrate/jRate.h>
#include <jvm.h>
#include <javax/realtime/MethodAreaMemory.h>

void
javax::realtime::MethodAreaMemory::init() {
    this->ma_ = (gnu::gcj::RawData*)jRateGetMethodArea();
    jRateGetMethodArea()->setPeer(this);
    this->sizeInBytes = jRateGetMethodArea()->totalMemory();
    JRATE_LOG(("[jRate<MethodAreaMemory::init()>]: MethodArea at %p\n", jRateGetMethodArea()));
    JRATE_LOG(("[jRate<MethodAreaMemory::init()>]: Java MethodArea Wrapper at %p\n", this));
}

void
javax::realtime::MethodAreaMemory::fini() { }


jlong
javax::realtime::MethodAreaMemory::memoryConsumed() {
    return jRateGetMethodArea()->usedMemory();
}

jlong
javax::realtime::MethodAreaMemory::memoryRemaining() {
    return jRateGetMethodArea()->availableMemory();
}
