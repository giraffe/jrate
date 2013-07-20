// ************************************************************************
//    $Id: SizeEstimator.cc 401 2003-10-28 16:34:45Z corsaro $
// ************************************************************************

#include "jrate/sys/Platform.h"

#include <javax/realtime/SizeEstimator.h>
#include <java/lang/Class.h>
#include <stdlib.h>
//
// TODO: USe platform traits in order to get the right alignment
//
jlong
javax::realtime::SizeEstimator::sizeOf(java::lang::Class *klass) {
   size_t size = klass->size();
   size_t k = size/jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT; 
   if (size != k*jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT)
       size = (k+1)*jrate::sys::PlatformTraits_t::MALLOC_ALIGNMENT;
   
   return size;
}
