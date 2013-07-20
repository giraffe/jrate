#ifndef __JAVA_MEMORY_AREAS_H__
#define __JAVA_MEMORY_AREAS_H__

#include <javax/realtime/MemoryArea.h>

// This functions are implemented in a platform specific way. their
// implementation currently takes advantage of the TSS.


// Gets the current memory area for the calling thread.
javax::realtime::MemoryArea * _Jv_GetCurrentMemoryArea();

// Sets the current memory area for the calling thread.
void _Jv_SetCurrentMemoryArea(javax::realtime::MemoryArea * memArea);


// Memory Management functions



#endif // __JAVA_MEMORY_AREAS_H__ 
