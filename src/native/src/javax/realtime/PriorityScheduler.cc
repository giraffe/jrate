// ************************************************************************
//    $Id: PriorityScheduler.cc 474 2005-01-24 11:03:10Z mdeters $
// ************************************************************************

#include <javax/realtime/PriorityScheduler.h>
#include <sched.h>

// NOTE: This method should actually call two platform dependent
// wrappers, that return the right number regardless of the fact that
// pthreads are being used or not. For now, being posix systems our
// main target, this code is just fine. 

jint
javax::realtime::PriorityScheduler::getMaxPriorityImpl () {
  return static_cast<jint>(sched_get_priority_max(SCHED_FIFO));
}

jint
javax::realtime::PriorityScheduler::getMinPriorityImpl () {
  return static_cast<jint>(sched_get_priority_min(SCHED_FIFO));
}
