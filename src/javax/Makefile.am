########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 531 2005-07-01 19:41:02Z mdeters $
###############################################################################

AM_GCJFLAGS = --classpath=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(top_builddir)/classes:$(top_srcdir)/src:.

toolexeclib_LTLIBRARIES = libjRateRT.la

JAVAX_REALTIME_SRCS = \
	realtime/AbsoluteTime.java \
	realtime/AccessViolationError.java \
	realtime/AperiodicParameters.java \
	realtime/Arena.java \
	realtime/ArenaFactory.java \
	realtime/AsyncEvent.java \
	realtime/AsyncEventHandler.java \
	realtime/AsynchronouslyInterruptedException.java \
	realtime/BoundAsyncEventHandler.java \
	realtime/CTMemory.java \
	realtime/CTPrivateMemory.java \
	realtime/Clock.java \
	realtime/ExecutionEligibilityParameters.java \
	realtime/HeapMemory.java \
	realtime/HighResolutionClock.java \
	realtime/HighResolutionTime.java \
	realtime/HighResolutionTimer.java \
	realtime/ImmortalMemory.java \
	realtime/ImportanceParameters.java \
	realtime/InaccessibleAreaException.java \
	realtime/LTMemory.java \
	realtime/LTPrivateMemory.java \
	realtime/MemoryAccessError.java \
	realtime/MemoryArea.java \
	realtime/MemoryParameters.java \
	realtime/MethodAreaMemory.java \
	realtime/NoHeapRealtimeThread.java \
	realtime/OneShotTimer.java \
	realtime/OneShotTimerImpl.java \
	realtime/OneShotTimerServer.java \
	realtime/POSIXSignalHandler.java \
	realtime/PeriodicParameters.java \
	realtime/PeriodicTimer.java \
	realtime/PeriodicTimerImpl.java \
	realtime/PeriodicTimerServer.java \
	realtime/PooledAsyncEventHandler.java \
	realtime/PrimordialMemory.java \
	realtime/PriorityParameters.java \
	realtime/PriorityQueue.java \
	realtime/PriorityScheduler.java \
	realtime/PrivateScopedMemory.java \
	realtime/ProcessingGroupParameters.java \
	realtime/RationalTime.java \
	realtime/RealtimeClock.java \
	realtime/RealtimeClockPeriodicTimerImpl.java \
	realtime/RealtimeThread.java \
	realtime/RefCountedArena.java \
	realtime/RelativeTime.java \
	realtime/ReleaseParameters.java \
	realtime/Schedulable.java \
	realtime/Scheduler.java \
	realtime/SchedulingParameters.java \
	realtime/ScopedCycleException.java \
	realtime/ScopedMemory.java \
	realtime/SizeEstimator.java \
	realtime/SporadicParameters.java \
	realtime/ThreadedAsyncEventHandler.java \
	realtime/ThrowBoundaryError.java \
	realtime/Timer.java \
	realtime/TimerImpl.java \
	realtime/UnimplementedFeatureError.java \
	realtime/UnknownHappeningException.java \
	realtime/VTMemory.java \
	realtime/jRateSystem.java \
	realtime/util/CountableEventVariable.java \
	realtime/util/EventVariable.java \
	realtime/util/Executor.java \
	realtime/util/PooledExecutor.java \
	realtime/util/ShutdownExecutorException.java \
	realtime/util/ThreadBoundExecutor.java \
	realtime/util/ThreadedExecutor.java

JAVAX_REALTIME_GCJ_RUNTIME_SRCS = \
	realtime/IllegalAssignmentError.java

libjRateRT_la_SOURCES = \
	$(JAVAX_REALTIME_SRCS)

libjRateRT_la_LDFLAGS = \
## The mysterious backslash is consumed by make.
	-version-info `grep -v '^\#' $(JRATE_SRC_DIR)/config/libjratert-version`

EXTRA_DIST = \
	$(JAVAX_REALTIME_GCJ_RUNTIME_SRCS)

# Java classes stuff

CLASSPATH_ENV = CLASSPATH=$(top_builddir)/classes:$(top_srcdir)/src
# JRATE_JARNAME points to jRate's stage2 build of the jar.  stage3 will
# install this but won't build it.
JRATE_JARNAME = $(JRATE_BUILD_DIR)/src/javax/libjRate-$(PACKAGE_VERSION).jar

JAVAROOT = $(top_builddir)/classes

noinst_JAVA = \
	$(JAVAX_REALTIME_SRCS) \
	$(JAVAX_REALTIME_GCJ_RUNTIME_SRCS)

jardir = $(datadir)/java
jar_DATA = $(JRATE_JARNAME)

#classnoinst.stamp: javaroot.stamp
javaroot.stamp:
	mkdir -p $(JAVAROOT)
	echo timestamp > javaroot.stamp

cni-stamp: classnoinst.stamp
	$(MAKE) -C $(top_builddir)/src/native/include
	echo timestamp > cni-stamp

.PHONY: jar
jar: $(JRATE_JARNAME)

$(JRATE_JARNAME): classnoinst.stamp
	$(if $(JAR),$(JAR),jar) cf $(JRATE_JARNAME) -C $(JAVAROOT) javax
