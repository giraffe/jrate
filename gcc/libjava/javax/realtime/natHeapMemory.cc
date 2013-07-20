// ************************************************************************
//    $Id: HeapMemory.cc 401 2003-10-28 16:34:45Z corsaro $
// ************************************************************************

#include "jrate/jRate.h"
#include "jrate/Config.h"
#include "jrate/binding/java/Heap.h"

#include <javax/realtime/HeapMemory.h>
#include <jvm.h>
#include <stdio.h>

//
// Since the Heap is a Singlethon we can statically allocate the
// associated allocator, and use a function to get access to it. 
//

// TODO: Fix this hack!
// #define JRATE_HEAP_SIZE 94371800 // 90MB

inline unsigned long jRateHeapMemorySize() {
    char * memSize = getenv(JRATE_HEAP_MEMORY_SIZE_ENV_VAR);
    unsigned int size;
    if (memSize != 0) {
        sscanf(memSize, "%d", &size);
        size = size << 20;
    }
    else
        size = JRATE_HEAP_MEMORY_SIZE << 20;

    return size;
}

inline ::jrate::binding::java::Heap_t& jRateHeapMemory() {
    static unsigned long size = jRateHeapMemorySize();
    static jrate::binding::java::Heap_t* theInstance =
        new jrate::binding::java::Heap_t(size, size);
    return *theInstance;
}

void
javax::realtime::HeapMemory::init() {
    ::jrate::binding::java::ObjectInitializer< javax::realtime::HeapMemory >
          objInitializer(this); 
    jRateHeapMemory().setObjectInitializer(objInitializer); 
    jRateHeapMemory().setPeer(this);
    jRateSetHeapMemory(&jRateHeapMemory());
    jRateSetDefaultMemoryRegion(&jRateHeapMemory());
    JRATE_LOG(("[jRate<HeapMemory::init()>]: Heap at %p\n", &jRateHeapMemory()));
    JRATE_LOG(("[jRate<HeapMemory::init()>]: Java Heap Wrapper at %p\n", this));
    this->ma_ = (gnu::gcj::RawData*)&jRateHeapMemory();
    this->sizeInBytes = jRateHeapMemory().totalMemory();
}
void
javax::realtime::HeapMemory::fini() { }

jlong
javax::realtime::HeapMemory::memoryConsumed() {
    return jRateHeapMemory().usedMemory();
}

jlong
javax::realtime::HeapMemory::memoryRemaining() {
    return jRateHeapMemory().availableMemory();
}

