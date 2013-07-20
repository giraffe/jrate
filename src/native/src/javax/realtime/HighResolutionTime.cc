// ************************************************************************
//    $Id: HighResolutionTime.cc 527 2005-04-01 21:28:33Z mdeters $
// ************************************************************************

#include <javax/realtime/HighResolutionTime.h>

jint
javax::realtime::HighResolutionTime::hashCodeImpl() {
  /* This used to be a reinterpret_cast<jint>(this), but that fails to
   * compile on 64-bit!  We don't care about loss of precision here. */
  return jint(this);
}

  
