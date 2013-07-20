#include "jrate/binding/java/MemoryAreaBufferProvider.h"
#include "jrate/Config.h"

::jrate::binding::java::MemoryAreaBufferProvider::MemoryAreaBufferProvider(size_t size)
    : MemoryAreaBufferProviderBase_t(size) { }
    
::jrate::binding::java::MemoryAreaBufferProvider::~MemoryAreaBufferProvider() { }

static inline unsigned int jRateGetScopesArenaSize() {
    char * memSize = getenv(JRATE_SCOPES_ARENA_SIZE_ENV_VAR);
    unsigned int size;
    if (memSize != 0) {
        sscanf(memSize, "%d", &size);
        size = size << 20;
    }
    else
        size = ::jrate::binding::java::Runtime_t::SCOPES_ARENA_SIZE;

    return size;
}

::jrate::binding::java::MemoryAreaBufferProvider&
::jrate::binding::java::MemoryAreaBufferProvider::instance() {
    static MemoryAreaBufferProvider theInstance(jRateGetScopesArenaSize());
    return theInstance;
}
