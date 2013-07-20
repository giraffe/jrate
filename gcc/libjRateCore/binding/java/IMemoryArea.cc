#include "jrate/sys/Runtime.h"
#include "jrate/binding/java/IMemoryArea.h"

::jrate::binding::java::IMemoryAreaTSS_t jRateMemoryAreaTSS;

template<> ::jrate::binding::java::IMemoryAreaTSS_t&
::jrate::sys::getTSS<jrate::binding::java::IMemoryAreaTSS_t>()
{
    return jRateMemoryAreaTSS;
}



