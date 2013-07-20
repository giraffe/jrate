########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 531 2005-07-01 19:41:02Z mdeters $
###############################################################################

# Multilib support variables.
MULTISRCTOP =
MULTIBUILDTOP =
MULTIDIRS =
MULTISUBDIR =
MULTIDO = true
MULTICLEAN = true

AM_CXXFLAGS = -I$(JRATE_BUILD_DIR) -I$(JRATE_BUILD_DIR)/src/native/include -I$(JRATE_BUILD_DIR)/src/native/src -I$(JRATE_SRC_DIR)/src/native/src -I$(JRATE_GCC_SRC_DIR)/libjava -I../libjava -I../libjava/include

toolexeclib_LTLIBRARIES = libjRateCore.la

libjRateCore_la_SOURCES = \
	binding/java/IMemoryArea.cc \
	binding/java/MemoryAreaBufferProvider.cc \
	binding/java/OutOfMemoryHandler.cc \
	mem/Buffer.cc \
	mem/DisplayRefChecker.cc \
	sched/Init.cc \
	sched/PriorityParameters.cc \
	sched/PriorityScheduler.cc \
	sched/Runnable.cc \
	sched/Thread.cc \
	sched/Types.cc \
	synch/EventVariable.cc \
	synch/Mutex.cc \
	synch/Semaphore.cc \
	sys/Config.cc \
	sys/ISignalHandler.cc \
	sys/SignalManager.cc \
	sys/SignalSet.cc \
	sys/TimeValue.cc \
	sys/Timer.cc \
	sys/TimerManager.cc

libjRateCore_la_LDFLAGS = \
## The mysterious backslash is consumed by make.
	-version-info `grep -v '^\#' $(JRATE_SRC_DIR)/config/libjratecore-version`

EXTRA_DIST = \
	jRate.h \
	Config.h \
	Defaults.h \
	Macros.h \
	binding/java/CTAllocator.h \
	binding/java/CTMemory.h \
	binding/java/CTPrivateAllocator.h \
	binding/java/CTPrivateMemory.h \
	binding/java/Finalizer.h \
	binding/java/GCJBoehmAllocator.h \
	binding/java/HAllocator.h \
	binding/java/Heap.h \
	binding/java/IMAllocator.h \
	binding/java/IMemoryArea.h \
	binding/java/ImmortalMemory.h \
	binding/java/LTAllocator.h \
	binding/java/LTMemory.h \
	binding/java/LTPrivateAllocator.h \
	binding/java/LTPrivateMemory.h \
	binding/java/MAAllocator.h \
	binding/java/MemoryArea.h \
	binding/java/MemoryAreaBufferProvider.h \
	binding/java/MemoryAreaScope.h \
	binding/java/MethodArea.h \
	binding/java/ObjectInitializer.h \
	binding/java/OutOfMemoryHandler.h \
	binding/java/RefCountedArena.h \
	binding/java/RefCountedArenaAllocator.h \
	binding/java/Runtime.h \
	binding/java/ScopeStack.h \
	binding/java/Types.h \
	binding/java/VTAllocator.h \
	binding/java/VTMemory.h \
	mem/Allocator.h \
	mem/BoehmAllocator.h \
	mem/Buffer.h \
	mem/Buffer.inl \
	mem/BufferProvider.h \
	mem/DisplayRefChecker.h \
	mem/Finalizer.h \
	mem/IMemoryArea.h \
	mem/MMapBufferProvider.h \
	mem/MallocAllocator.h \
	mem/MallocBufferProvider.h \
	mem/MemLockingPolicy.h \
	mem/MemoryArea.h \
	mem/ObjectInitializer.h \
	mem/SegregatedBufferProvider.h \
	mem/StackAllocator.h \
	mem/StaticTypeSizeAligner.h \
	meta/IF.h \
	sched/Channel.h \
	sched/Config.h \
	sched/Executor.h \
	sched/IChannel.h \
	sched/IExecutor.h \
	sched/PooledExecutor.h \
	sched/PriorityParameters.h \
	sched/PriorityScheduler.h \
	sched/Runnable.h \
	sched/Schedulable.h \
	sched/ScopeStack.h \
	sched/SingleThreadedExecutor.h \
	sched/TSS.h \
	sched/TSSScope.h \
	sched/Thread.h \
	sched/Types.h \
	synch/Atomic.h \
	synch/AtomicCounter.h \
	synch/Config.h \
	synch/EventVariable.h \
	synch/Guard.h \
	synch/Mutex.h \
	synch/Semaphore.h \
	synch/Synchronizer.h \
	sys/Command.h \
	sys/Config.h \
	sys/ISignalHandler.h \
	sys/Platform.h \
	sys/Runtime.h \
	sys/SignalManager.h \
	sys/SignalSet.h \
	sys/TimeValue.h \
	sys/Timer.h \
	sys/TimerManager.h \
	utils/Assertions.h \
	utils/TypeWrapper.h \
	utils/Units.h

# Before anything can be built, we need to have CNI headers for java.lang.*
$(libjRateCore_la_OBJECTS): libjava-headers-stamp

# We need to ensure that the CNI headers are ready for us, but we can't
# fully build libgcj until libjRateCore is built.
libjava-headers-stamp:
	(echo '-include ../libjava/Makefile'; \
	echo '.PHONY: jRateCore-deps'; \
	echo 'jRateCore-deps: $$(all_java_class_files) $$(nat_headers) $$(x_nat_headers)') > ../libjava/Makefile.jRateCore
# We set JAVAC and GCJH in the environment; if the user had them set when
# they ./configured, their setting takes precedence.  It shouldn't matter
# if it's cross or whatever (we're just getting bytecode and CNI headers out
# of it)... just so long as it isn't cross-built.
	$(MAKE) -C ../libjava -f Makefile.jRateCore jRateCore-deps
	echo timestamp > libjava-headers-stamp

# Work around what appears to be a GNU make bug handling MAKEFLAGS
# values defined in terms of make variables, as is the case for CC and
# friends when we are called from the top level Makefile.
AM_MAKEFLAGS = \
	"AR_FLAGS=$(AR_FLAGS)" \
	"CC_FOR_BUILD=$(CC_FOR_BUILD)" \
	"CFLAGS=$(CFLAGS)" \
	"CXXFLAGS=$(CXXFLAGS)" \
	"CFLAGS_FOR_BUILD=$(CFLAGS_FOR_BUILD)" \
	"CFLAGS_FOR_TARGET=$(CFLAGS_FOR_TARGET)" \
	"INSTALL=$(INSTALL)" \
	"INSTALL_DATA=$(INSTALL_DATA)" \
	"INSTALL_PROGRAM=$(INSTALL_PROGRAM)" \
	"INSTALL_SCRIPT=$(INSTALL_SCRIPT)" \
	"LDFLAGS=$(LDFLAGS)" \
	"LIBCFLAGS=$(LIBCFLAGS)" \
	"LIBCFLAGS_FOR_TARGET=$(LIBCFLAGS_FOR_TARGET)" \
	"MAKE=$(MAKE)" \
	"MAKEINFO=$(MAKEINFO) $(MAKEINFOFLAGS)" \
	"PICFLAG=$(PICFLAG)" \
	"PICFLAG_FOR_TARGET=$(PICFLAG_FOR_TARGET)" \
	"SHELL=$(SHELL)" \
	"EXPECT=$(EXPECT)" \
	"RUNTEST=$(RUNTEST)" \
	"RUNTESTFLAGS=$(RUNTESTFLAGS)" \
	"exec_prefix=$(exec_prefix)" \
	"infodir=$(infodir)" \
	"libdir=$(libdir)" \
	"prefix=$(prefix)" \
	"tooldir=$(tooldir)" \
	"AR=$(AR)" \
	"AS=$(AS)" \
	"LD=$(LD)" \
	"LIBCFLAGS=$(LIBCFLAGS)" \
	"NM=$(NM)" \
	"PICFLAG=$(PICFLAG)" \
	"RANLIB=$(RANLIB)" \
	"DESTDIR=$(DESTDIR)"
# removed 6/28/2005 MGD
#	"CC=$(CC)"
#	"CXX=$(CXX)"

# Multilib support.
.PHONY: all-multi mostlyclean-multi clean-multi distclean-multi \
       maintainer-clean-multi

all-am: all-multi
install-am: all-am install-multi
	$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
mostlyclean-local: mostlyclean-multi
clean-local: clean-multi
distclean-local: distclean-multi
maintainer-clean-local: maintainer-clean-multi

all-multi:
	: $(MAKE) ; exec $(MULTIDO) $(AM_MAKEFLAGS) DO=all multi-do
install-multi:
	$(MULTIDO) $(AM_MAKEFLAGS) DO=install multi-do
mostlyclean-multi:
	$(MULTICLEAN) $(AM_MAKEFLAGS) DO=mostlyclean multi-clean
clean-multi:
	$(MULTICLEAN) $(AM_MAKEFLAGS) DO=clean multi-clean
distclean-multi:
	$(MULTICLEAN) $(AM_MAKEFLAGS) DO=distclean multi-clean
maintainer-clean-multi:
	$(MULTICLEAN) $(AM_MAKEFLAGS) DO=maintainer-clean multi-clean
