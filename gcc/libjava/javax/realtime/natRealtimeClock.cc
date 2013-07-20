// ************************************************************************
//    $Id: RealtimeClock.cc 346 2003-06-03 05:16:14Z corsaro $
// ************************************************************************

#include <javax/realtime/RealtimeClock.h>
#include <javax/realtime/RelativeTime.h>
#include <javax/realtime/AbsoluteTime.h>
#include <time.h>
#include <sys/time.h>

#include <stdio.h>
void
javax::realtime::RealtimeClock::getTimeImpl(javax::realtime::AbsoluteTime * dest) {
    timeval tv;
    gettimeofday(&tv, 0);
    jlong adjMillis = tv.tv_usec / 1000;
    jlong nanos = (tv.tv_usec - (adjMillis * 1000)) * 1000;
    jlong millis = tv.tv_sec;
    millis = adjMillis + (millis * 1000);
    dest->set(millis, (jint)nanos); 
}

void
javax::realtime::RealtimeClock::setResolutionImpl(javax::realtime::RelativeTime *) {

  // Do nothing. We don't give a way of setting the time resolution
  // yet.
}

javax::realtime::RelativeTime *
javax::realtime::RealtimeClock::getResolutionImpl() {
  struct timespec res;
  clock_getres(CLOCK_REALTIME, &res);
  return new javax::realtime::RelativeTime(0, res.tv_nsec);
}
