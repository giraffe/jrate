// ************************************************************************
//    $Id: ImmortalMemory.cc 401 2003-10-28 16:34:45Z corsaro $
// ************************************************************************

#include <jrate/jRate.h>
#include <jrate/Config.h>
#include <jrate/binding/java/ImmortalMemory.h>

#include <javax/realtime/ImmortalMemory.h>
#include <java/lang/OutOfMemoryError.h>
#include <gcj/cni.h>
#include <stdlib.h>
#include <jvm.h>
#include <stdio.h>


#define thisMemArea ((jrate::binding::java::ImmortalMemory_t *)this->ma_)

// TODO: The immortal memory should actually be configurable. This
// means that we should be able to set the type of memory area that
// should be used as Immortal memory. In fact it might be desirable to
// use the efficient, but less flexible CTMemoryArea, of maybe some
// other scheme that provides 


jlong
javax::realtime::ImmortalMemory::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::ImmortalMemory::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::ImmortalMemory::init() {
    JRATE_LOG(("[jRate<ImmortalMemory::init>]:\n"));
    char * memSize = getenv(JRATE_IMMORTAL_MEMORY_SIZE_ENV_VAR);
    unsigned int size;
    if (memSize != 0) {
        sscanf(memSize, "%d", &size);
        size = size << 20;
    }
    else {
        size = JRATE_IMMORTAL_MEMORY_SIZE << 20;
    }

    this->sizeInBytes = size;

    jrate::binding::java::ImmortalMemory_t* ima =
        new jrate::binding::java::ImmortalMemory_t(this->sizeInBytes,
                                                   this->sizeInBytes);
    ::jrate::binding::java::ObjectInitializer< javax::realtime::ImmortalMemory >
          objInitializer(this); 
    ima->setObjectInitializer(objInitializer);
    jRateSetImmortalMemory(ima);
    ima->setPeer(this);
    JRATE_LOG(("[jRate<ImortalMemory::init()>]: ImmortalMemory at %p\n", ima));
    JRATE_LOG(("[jRate<ImortalMemory::init()>]: Java ImmortalMemory Wrapper at  %p\n", this));
    this->ma_ = (gnu::gcj::RawData *)ima;
}

void
javax::realtime::ImmortalMemory::fini() {
    JRATE_LOG(("[jRate<ImmortalMemory>]: fini()\n"));
    delete thisMemArea;
}


