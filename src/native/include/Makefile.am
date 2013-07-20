########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 527 2005-04-01 21:28:33Z mdeters $
###############################################################################

all-local: \
	javax/realtime/MemoryParameters.h \
	javax/realtime/ProcessingGroupParameters.h \
	javax/realtime/HeapMemory.h \
	javax/realtime/POSIXSignalHandler.h \
	javax/realtime/SizeEstimator.h \
	javax/realtime/RationalTime.h \
	javax/realtime/PriorityQueue.h \
	javax/realtime/VTMemory.h \
	javax/realtime/ImmortalMemory.h \
	javax/realtime/PriorityParameters.h \
	javax/realtime/Arena.h \
	javax/realtime/ThrowBoundaryError.h \
	javax/realtime/PeriodicTimerServer.h \
	javax/realtime/RelativeTime.h \
	javax/realtime/OneShotTimer.h \
	javax/realtime/ScopedMemory.h \
	javax/realtime/ArenaFactory.h \
	javax/realtime/PriorityScheduler.h \
	javax/realtime/NoHeapRealtimeThread.h \
	javax/realtime/PrivateScopedMemory.h \
	javax/realtime/SchedulingParameters.h \
	javax/realtime/RealtimeThread.h \
	javax/realtime/Timer.h \
	javax/realtime/jRateSystem.h \
	javax/realtime/ReleaseParameters.h \
	javax/realtime/AperiodicParameters.h \
	javax/realtime/CTMemory.h \
	javax/realtime/SporadicParameters.h \
	javax/realtime/AbsoluteTime.h \
	javax/realtime/Scheduler.h \
	javax/realtime/ImportanceParameters.h \
	javax/realtime/UnimplementedFeatureError.h \
	javax/realtime/PeriodicParameters.h \
	javax/realtime/HighResolutionTimer.h \
	javax/realtime/AsyncEventHandler.h \
	javax/realtime/OneShotTimerServer.h \
	javax/realtime/RefCountedArena.h \
	javax/realtime/AccessViolationError.h \
	javax/realtime/Clock.h \
	javax/realtime/RealtimeClock.h \
	javax/realtime/ExecutionEligibilityParameters.h \
	javax/realtime/CTPrivateMemory.h \
	javax/realtime/MemoryArea.h \
	javax/realtime/OneShotTimerImpl.h \
	javax/realtime/PeriodicTimer.h \
	javax/realtime/AsyncEvent.h \
	javax/realtime/AsynchronouslyInterruptedException.h \
	javax/realtime/LTMemory.h \
	javax/realtime/RealtimeClockPeriodicTimerImpl.h \
	javax/realtime/TimerImpl.h \
	javax/realtime/BoundAsyncEventHandler.h \
	javax/realtime/PeriodicTimerImpl.h \
	javax/realtime/MemoryAccessError.h \
	javax/realtime/ScopedCycleException.h \
	javax/realtime/IllegalAssignmentError.h \
	javax/realtime/HighResolutionClock.h \
	javax/realtime/MethodAreaMemory.h \
	javax/realtime/PrimordialMemory.h \
	javax/realtime/PooledAsyncEventHandler.h \
	javax/realtime/ThreadedAsyncEventHandler.h \
	javax/realtime/InaccessibleAreaException.h \
	javax/realtime/Schedulable.h \
	javax/realtime/LTPrivateMemory.h \
	javax/realtime/HighResolutionTime.h \
	javax/realtime/UnknownHappeningException.h \
	javax/realtime/util/PooledExecutor.h \
	javax/realtime/util/Executor.h \
	javax/realtime/util/ShutdownExecutorException.h \
	javax/realtime/util/ThreadBoundExecutor.h \
	javax/realtime/util/EventVariable.h \
	javax/realtime/util/CountableEventVariable.h \
	javax/realtime/util/ThreadedExecutor.h

dir-stamp:
	mkdir -p javax/realtime/util
	echo timestamp > dir-stamp

javax/realtime/%.h: $(top_builddir)/classes/javax/realtime/%.class dir-stamp
	$(GCJH) $(GCJHFLAGS) --classpath=$(top_builddir)/classes -o $@ $(subst /,.,$(patsubst %.h,%,$@))

