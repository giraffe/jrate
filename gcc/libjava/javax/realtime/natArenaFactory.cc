#include "javax/realtime/ArenaFactory.h"
#include "javax/realtime/RefCountedArena.h"
#include "javax/realtime/SizeEstimator.h"
#include "jrate/binding/java/MemoryAreaScope.h"
#include "jRate-gc.h"

javax::realtime::RefCountedArena*
javax::realtime::ArenaFactory::createRefCountedArena(jlong size) {
    ::jrate::binding::java::MemoryAreaScope_t newScope(jRateGetMethodArea());
    return new javax::realtime::RefCountedArena(size);
}

javax::realtime::RefCountedArena*
javax::realtime::ArenaFactory::createRefCountedArena(javax::realtime::SizeEstimator* size) {
    ::jrate::binding::java::MemoryAreaScope_t newScope(jRateGetMethodArea());
    return new javax::realtime::RefCountedArena(size->getEstimate());
}

javax::realtime::RefCountedArena*
javax::realtime::ArenaFactory::createRefCountedArena(jlong size, java::lang::Runnable* logic) {
    ::jrate::binding::java::MemoryAreaScope_t newScope(jRateGetMethodArea());
    return new javax::realtime::RefCountedArena(size, logic);
}

javax::realtime::RefCountedArena*
javax::realtime::ArenaFactory::createRefCountedArena(javax::realtime::SizeEstimator* size,
                                                     java::lang::Runnable* logic)
{
    ::jrate::binding::java::MemoryAreaScope_t newScope(jRateGetMethodArea());
    return new javax::realtime::RefCountedArena(size->getEstimate(), logic);
}    
