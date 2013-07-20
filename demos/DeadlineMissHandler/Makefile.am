########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 551 2005-07-08 21:58:00Z mdeters $
###############################################################################

CLASSPATH_ENV = CLASSPATH=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(JRATE_BUILD_DIR)/classes:.
AM_GCJFLAGS = --classpath=$(JRATE_GCC_BUILD_DIR)/$(target)/libjava:$(JRATE_BUILD_DIR)/classes:.

pkgdocdemosdir = $(datadir)/doc/$(PACKAGE)/demos
pkgdocdemosDeadlineMissHandlerdir = $(pkgdocdemosdir)/DeadlineMissHandler

# necessary since we comment out noinst_PROGRAMS below
EXTRA_DIST = \
	$(deadlineMissHandlerDemo_SOURCES)

# noinst_PROGRAMS = \
#	deadlineMissHandlerDemo

deadlineMissHandlerDemo_SOURCES = \
	DeadlineMissHandlerDemo.java \
	DeadlineMissHandlerLogic.java
deadlineMissHandlerDemo_LDFLAGS = --main=DeadlineMissHandlerDemo
$(deadlineMissHandlerDemo_SOURCES:.java=.$(OBJEXT)): classpkgdocdemosDeadlineMissHandler.stamp
# %.class: %.java; $(MAKE) classpkgdocdemosDeadlineMissHandler.stamp

pkgdocdemosDeadlineMissHandler_DATA = \
	$(deadlineMissHandlerDemo_SOURCES)

JAVAC = @GCJ@
AM_JAVACFLAGS = -C
JAVAROOT = .
