#include <stdio.h>

#include <javax/realtime/HeapMemory.h>
#include <javax/realtime/ImmortalMemory.h>

#include "jrate/jRate.h"
#include "jrate/sys/Runtime.h"
#include "jrate/binding/java/OutOfMemoryHandler.h"
#include "jrate/binding/java/IMemoryArea.h"
#include "jrate/mem/IMemoryArea.h"

extern ::jrate::binding::java::IMemoryArea_t* theMethodArea;
extern ::jrate::binding::java::IMemoryArea_t* theHeap;
extern ::jrate::binding::java::IMemoryArea_t* theImmortalMemory;

::java::lang::OutOfMemoryError*
jrate::binding::java::OutOfMemoryHandler::jRateOutOfMemoryError_ = 0;


void
jrate::binding::java::OutOfMemoryHandler::handleOutOfMemory() {
    ::jrate::binding::java::IMemoryArea_t* ma =
          ::jrate::sys::getTSS< ::jrate::binding::java::IMemoryAreaTSS_t >().get();
    if(ma->typeID() & jrate::mem::PRIMORDIAL_MEMORY) {
      fprintf(stderr, "[FATAL]\n"
                      "[FATAL] jRate ran out of memory in a primordial memory area.\n");
      if(ma == theMethodArea) {
        fprintf(stderr, "[FATAL] The exhausted area is the MethodAreaMemory area.\n"
                        "[FATAL] You will not get a real exception stack trace.\n");
        throw jRateOutOfMemoryError_;
      } else if(ma == theHeap) {
        fprintf(stderr, "[FATAL] The exhausted area is the HeapMemory area.\n");
      } else if(ma == theImmortalMemory) {
        fprintf(stderr, "[FATAL] The exhausted area is the ImmortalMemory area.\n");
      } else {
        fprintf(stderr, "[FATAL] The exhausted area is of UNKNOWN type! (perhaps ScopeArena?)\n");
      }
      fprintf(stderr, "[FATAL] Consider increasing the environment variables\n"
                      "[FATAL]           JRATE_HEAP_MEMORY_SIZE\n"
                      "[FATAL]    and/or JRATE_IMMORTAL_MEMORY_SIZE\n"
                      "[FATAL]    and/or JRATE_METHOD_MEMORY_SIZE\n"
                      "[FATAL]    and/or JRATE_SCOPES_ARENA_SIZE\n"
                      "[FATAL] as appropriate.  (Units are megabytes.)\n"
                      "[FATAL]\n");
    }

    jRateOutOfMemoryError_->fillInStackTrace();
    throw jRateOutOfMemoryError_;
}

void
jrate::binding::java::OutOfMemoryHandler::init() {
    jRateOutOfMemoryError_ = new ::java::lang::OutOfMemoryError();
}
