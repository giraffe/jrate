#include <jvm.h>
#include <gcj/cni.h>

#include <javax/realtime/RefCountedArena.h>
#include <java/lang/OutOfMemoryError.h> 
#include <jrate/jRate.h>
#include <jrate/binding/java/RefCountedArena.h>

#define thisMemArea ((jrate::binding::java::RefCountedArena_t*)ma_)

jlong
javax::realtime::RefCountedArena::memoryConsumed() {
    return thisMemArea->usedMemory();
}

jlong
javax::realtime::RefCountedArena::memoryRemaining() {
    return thisMemArea->availableMemory();
}

void
javax::realtime::RefCountedArena::fini() {
    delete thisMemArea;
}

void
javax::realtime::RefCountedArena::init() {
    JRATE_LOG(("[jRate<CTMemory>]: init\n"));
    // TODO: Change this to use a placement new!
    ::jrate::binding::java::RefCountedArena_t* rca =
          new ::jrate::binding::java::RefCountedArena_t(this->sizeInBytes,
                                                        this->sizeInBytes);
    ::jrate::binding::java::ObjectInitializer< ::javax::realtime::RefCountedArena > objInitializer(this);
    rca->setObjectInitializer(objInitializer);
    rca->setPeer(this);
    this->ma_ = (gnu::gcj::RawData*)rca;
    
    JRATE_LOG(("[jRate<CTMemory::init()>]: ImmortalMemory at %p\n", rca));
    JRATE_LOG(("[jRate<CTMemory::init()>]: Java ImmortalMemory Wrapper at  %p\n", this));
    
    if (__builtin_expect(this->ma_ == 0, false))
        _Jv_ThrowNoMemory();
}
