########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 535 2005-07-05 16:02:17Z mdeters $
###############################################################################

SUBDIRS = . test

# jrate subdir is an *unconfigured subpackage*.  So we can't just put it
# in DIST_SUBDIRS or EXTRA_DIST.  We have to configure when doing a
# make dist.
dist-hook:
	mkdir -p jrate; \
	if test -f jrate/config.status; then :; else \
		(cd jrate && $(shell cd '$(srcdir)' && pwd)/jrate/configure); \
	fi; \
	if expr $(distdir) : '/.*' >/dev/null; then \
		thedistdir=$(distdir); \
	else \
		thedistdir=../$(distdir); \
	fi; \
	(cd jrate && $(MAKE) $(AM_MAKEFLAGS) \
		top_distdir="$(top_distdir)" distdir=$$thedistdir/jrate \
		distdir) || exit 1

AM_CXXFLAGS = -I$(top_builddir) -I$(top_srcdir)/src/native/include -I$(top_srcdir)/src/native/src -I$(top_srcdir) -I$(top_builddir)/src/native/include -I$(JRATE_GCC_SRC_DIR)/libjava/include -I$(JRATE_GCC_BUILD_DIR)/$(gcc_config_target)/libjava/include

toolexeclib_LTLIBRARIES = libjRate.la

libjRate_la_SOURCES = \
	javax/realtime/Arena.cc \
	javax/realtime/ArenaFactory.cc \
	javax/realtime/AsyncEventHandler.cc \
	javax/realtime/CTMemory.cc \
	javax/realtime/CTPrivateMemory.cc \
	javax/realtime/HeapMemory.cc \
	javax/realtime/HighResolutionClock.cc \
	javax/realtime/HighResolutionTime.cc \
	javax/realtime/ImmortalMemory.cc \
	javax/realtime/LTMemory.cc \
	javax/realtime/LTPrivateMemory.cc \
	javax/realtime/MemoryArea.cc \
	javax/realtime/MethodAreaMemory.cc \
	javax/realtime/POSIXSignalHandler.cc \
	javax/realtime/PriorityScheduler.cc \
	javax/realtime/RealtimeClock.cc \
	javax/realtime/RealtimeThread.cc \
	javax/realtime/RefCountedArena.cc \
	javax/realtime/ScopedMemory.cc \
	javax/realtime/SizeEstimator.cc \
	javax/realtime/VTMemory.cc \
	javax/realtime/jRateSystem.cc

libjRate_la_LDFLAGS = \
## The mysterious backslash is consumed by make.
	-version-info `grep -v '^\#' $(JRATE_SRC_DIR)/config/libjrate-version`
