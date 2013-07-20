// ************************************************************************
//    $Id: HighResolutionClock.cc 527 2005-04-01 21:28:33Z mdeters $
// ************************************************************************

#include <javax/realtime/HighResolutionClock.h>
#include <javax/realtime/AbsoluteTime.h>
#include <javax/realtime/RelativeTime.h>
#include <javax/realtime/UnimplementedFeatureError.h>
#include <sys/time.h>
#include <jrate/jRate.h>

#include <stdio.h>

void
javax::realtime::HighResolutionClock::getTimeImpl(::javax::realtime::AbsoluteTime * hrtime) {
#if __i386__
  // Here I use the RDTSC instruction provided by the Pentium
  // Processor family to access the clock counter. To avoid problem
  // with out of order execution, and to make sure that the clock
  // cycle number is accessed really where the call appears in the
  // source code a cpuid instruction is added.
  //
  unsigned long long int rdtsc_;

  __asm__ __volatile__ ("rdtsc"
                        : "=A" (rdtsc_) // Output
      );

  // Convert clock number into nano seconds
  long double timeNS = rdtsc_ * CLOCK_PERIOD_NS;

  jlong milliSec = static_cast<jlong>(timeNS/POW_6_TEN);
  jlong nanoSec = static_cast<jlong>(timeNS - (milliSec * POW_6_TEN));

  hrtime->set_(milliSec, nanoSec);
#endif /* __i386__ */

#if __powerpc__ || __alpha__ || __sparc__ || __x86_64__
  throw new ::javax::realtime::UnimplementedFeatureError();
#endif /* __powerpc__ || __alpha__ || __sparc__ || __x86_64__ */
}

jlong
javax::realtime::HighResolutionClock::getClockTickCountImpl() {
#if __i386__
  unsigned long long int rdtsc_;
  __asm__ __volatile__ ("rdtsc"
                        : "=A" (rdtsc_) // Output
      );
  return static_cast<jlong>(rdtsc_);
#endif /* __i386__ */

#if __powerpc__ || __alpha__ || __sparc__ || __x86_64__
  throw new ::javax::realtime::UnimplementedFeatureError();
#endif /* __powerpc__ || __alpha__ || __sparc__ || __x86_64__ */
}

void
javax::realtime::HighResolutionClock::clockTickToTime(jlong rdtsc,
                                                      ::javax::realtime::RelativeTime *time)
{
  long double timeNS = rdtsc * CLOCK_PERIOD_NS;

  jlong milliSec = static_cast<jlong>(timeNS/POW_6_TEN);
  jlong nanoSec = static_cast<jlong>(timeNS - (milliSec * POW_6_TEN));
  time->set_(milliSec, nanoSec);
}

javax::realtime::RelativeTime *
javax::realtime::HighResolutionClock::getResolutionImpl () {
  return new javax::realtime::RelativeTime(0, (jint)(CLOCK_PERIOD_NS));
}

void
javax::realtime::HighResolutionClock::setResolutionImpl() {
  // Do nothing,
  // We cannot change (in general) the CPU clock frequency
}
