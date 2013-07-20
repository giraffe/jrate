########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 551 2005-07-08 21:58:00Z mdeters $
###############################################################################

AM_GCJFLAGS = --classpath=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(JRATE_BUILD_DIR)/classes:.
CLASSPATH_ENV = CLASSPATH=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(JRATE_BUILD_DIR)/classes:.

pkgdocdemosdir = $(datadir)/doc/$(PACKAGE)/demos
pkgdocdemosPeriodicTimerdir = $(pkgdocdemosdir)/PeriodicTimer

# necessary since we comment out noinst_PROGRAMS below
EXTRA_DIST = \
	$(periodicTimerDemo_SOURCES)

# noinst_PROGRAMS = \
#	periodicTimerDemo

periodicTimerDemo_SOURCES = \
	PeriodicTimerDemo.java \
	TimeoutHandler.java
periodicTimerDemo_LDFLAGS = --main=PeriodicTimerDemo
$(periodicTimerDemo_SOURCES:.java=.$(OBJEXT)): classpkgdocdemosPeriodicTimer.stamp
%.class: %.java; $(MAKE) classpkgdocdemosPeriodicTimer.stamp

pkgdocdemosPeriodicTimer_DATA = \
	$(periodicTimerDemo_SOURCES)

JAVAC = @GCJ@
AM_JAVACFLAGS = -C
JAVAROOT = .
