# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = /home/yanxin/git/jrate/gcc/boehm-gc/include
top_srcdir = /home/yanxin/git/jrate/gcc/boehm-gc
VPATH = /home/yanxin/git/jrate/gcc/boehm-gc/include
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/gc
pkglibdir = $(libdir)/gc
pkgincludedir = $(includedir)/gc

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /bin/sh /home/yanxin/git/jrate/gcc/install-sh -c
INSTALL_PROGRAM = /bin/sh /home/yanxin/git/jrate/gcc/install-sh -c  $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = /bin/sh /home/yanxin/git/jrate/gcc/install-sh -c -m 644
INSTALL_SCRIPT = /bin/sh /home/yanxin/git/jrate/gcc/install-sh -c
transform = s,^,jRate-,; 

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = i686-pc-linux-gnu
build_triplet = i686-pc-linux-gnu
host_alias = i686-pc-linux-gnu
host_triplet = i686-pc-linux-gnu
target_alias = i686-pc-linux-gnu
target_triplet = i686-pc-linux-gnu
AR = ar
AS = as
CC = /home/yanxin/git/jrate/gcc-build/gcc/xgcc -B/home/yanxin/git/jrate/gcc-build/gcc/ -B/usr/local/i686-pc-linux-gnu/bin/ -B/usr/local/i686-pc-linux-gnu/lib/ -isystem /usr/local/i686-pc-linux-gnu/include
CPP = @CPP@
CXX = /home/yanxin/git/jrate/gcc-build/gcc/g++ -B/home/yanxin/git/jrate/gcc-build/gcc/ -nostdinc++ -nostdinc++ -I/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/include/i686-pc-linux-gnu -I/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/include -I/home/yanxin/git/jrate/gcc/libstdc++-v3/libsupc++ -I/home/yanxin/git/jrate/gcc/libstdc++-v3/libio -I/home/yanxin/git/jrate/gcc/libstdc++-v3/include/backward -I/home/yanxin/git/jrate/gcc/libstdc++-v3/testsuite -L/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/src -L/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/src/.libs -B/usr/local/i686-pc-linux-gnu/bin/ -B/usr/local/i686-pc-linux-gnu/lib/ -isystem /usr/local/i686-pc-linux-gnu/include
CXXCPP = /home/yanxin/git/jrate/gcc-build/gcc/xgcc -shared-libgcc -B/home/yanxin/git/jrate/gcc-build/gcc/ -nostdinc++  -L/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/src -L/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libstdc++-v3/src/.libs -B/usr/local/i686-pc-linux-gnu/bin/ -B/usr/local/i686-pc-linux-gnu/lib/ -isystem /usr/local/i686-pc-linux-gnu/include -E
CXXINCLUDES = 
DLLTOOL = @DLLTOOL@
EXEEXT = 
EXTRA_TEST_LIBS =  -ldl
GCJ = @GCJ@
GCJFLAGS = @GCJFLAGS@
GC_CFLAGS =  -fexceptions -I$(top_builddir)/./targ-include -I/home/yanxin/git/jrate/gcc/boehm-gc/./libc/include
INCLUDES = -I/home/yanxin/git/jrate/gcc/boehm-gc/include
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
MAINT = #
MAKEINFO = /home/yanxin/git/jrate/gcc/missing makeinfo
MY_CFLAGS = -O2 -g -O2
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = gc
RANLIB = ranlib
STRIP = strip
THREADLIBS = -lpthread
VERSION = 6.0
addobjs =  mach_dep.lo
gc_basedir = /home/yanxin/git/jrate/gcc/boehm-gc/.
mkinstalldirs = /home/yanxin/git/jrate/gcc/mkinstalldirs
target_all = libgcjgc.la

AUTOMAKE_OPTIONS = foreign

noinst_HEADERS = gc.h gc_backptr.h gc_local_alloc.h \
  gc_pthread_redirects.h gc_cpp.h

CONFIG_CLEAN_FILES = 
HEADERS =  $(noinst_HEADERS)

DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = gtar
GZIP_ENV = --best
all: all-redirect
.SUFFIXES:
$(srcdir)/Makefile.in: # Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --cygnus include/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = include

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  if test -f $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am:
check: check-am
installcheck-am:
installcheck: installcheck-am
install-info-am: 
install-info: install-info-am
install-exec-am:
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am:
uninstall: uninstall-am
all-am: Makefile $(HEADERS)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-tags mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-tags clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-tags distclean-generic clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-tags maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: tags mostlyclean-tags distclean-tags clean-tags \
maintainer-clean-tags distdir info-am info dvi-am dvi check check-am \
installcheck-am installcheck install-info-am install-info \
install-exec-am install-exec install-data-am install-data install-am \
install uninstall-am uninstall all-redirect all-am all installdirs \
mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
