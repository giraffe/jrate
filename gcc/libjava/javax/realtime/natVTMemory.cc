// ************************************************************************
//    $Id: VTMemory.cc 413 2003-11-21 23:02:15Z corsaro $
// ************************************************************************

#include <jvm.h>
#include <javax/realtime/VTMemory.h>

#include <jrate/jRate.h>
#include <jrate/binding/java/VTMemory.h>

#define thisMemArea ((jrate::binding::java::VTMemory_t *)this->ma_)

jlong
javax::realtime::VTMemory::memoryConsumed() {
   return thisMemArea->usedMemory();
}

jlong
javax::realtime::VTMemory::memoryRemaining() {
   return thisMemArea->availableMemory();
}

void
javax::realtime::VTMemory::init() {
   JRATE_LOG(("[jRate<VTMemory>]: init\n"));
   jrate::binding::java::VTMemory_t *vta =
       new jrate::binding::java::VTMemory_t(this->sizeInBytes,
                                            this->sizeInBytes);

   ::jrate::binding::java::ObjectInitializer< javax::realtime::VTMemory >
         objInitializer(this); 
   vta->setObjectInitializer(objInitializer); 
   vta->setPeer(this);
   this->ma_ =
      (gnu::gcj::RawData *)vta;
   if (__builtin_expect(this->ma_ == 0, false))
       _Jv_ThrowNoMemory();
}

void
javax::realtime::VTMemory::fini() {
   JRATE_LOG(("[jRate<VTMemory>]: fini()\n"));
   delete thisMemArea;
}
