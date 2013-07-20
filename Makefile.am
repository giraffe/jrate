########################################################### -*- Makefile -*- ##
## $Id: Makefile.am 543 2005-07-08 07:12:05Z mdeters $
###############################################################################
##
##                          jRate Root Makefile
##
###############################################################################

## We have a very different build process than previous versions.
## Basically, we stuff things into the GCC source tree, then bootstrap.
## Then we build docs.

# This weird definition of SUBDIRS is necessary or you'll get a
# degenerate tarball from make dist!
SUBDIRS = .

# Don't have automake be too smart here.
DIST_SUBDIRS = \
	docs \
	script \
	src \
	demos

EXTRA_DIST = \
	config/jrate.m4 \
	config/libjratecore-version \
	BUGS \
	LICENSING \
	VERSION

CLEANFILES = \
	gcc.source-stamp \
	gcc.patch-stamp \
	gcc.setup-stamp \
	gcc.configure-stamp \
	gcc.build-stamp \
	docs.build-stamp \
	finished-stamp

pkgdocdir = $(datadir)/doc/$(PACKAGE)

nobase_dist_pkgdoc_DATA = \
	AUTHORS \
	BUGS \
	ChangeLog \
	INSTALL \
	LICENSING \
	NEWS \
	README \
	VERSION

abs_top_srcdir = $(shell cd '$(top_srcdir)'; pwd)
abs_gcc_srcdir = $(shell cd '$(gcc_srcdir)'; pwd)
abs_gcc_builddir = $(shell cd '$(gcc_builddir)'; pwd)

.PHONY: api
api:
	mkdir -p '$(top_builddir)/docs/api'
	@if test x$(JAVADOC) = x; then \
		echo "ERROR: I couldn't find the javadoc tool." >&2; \
		exit 1; \
	else :; fi
	$(JAVADOC) \
		-d '$(top_builddir)/docs/api' \
		-sourcepath '$(top_srcdir)/src' \
		javax.realtime \
		javax.realtime.util \
		-windowtitle 'jRate Real-Time Java API' \
		-doctitle '<h1>jRate Real-Time Java API</h1>' \
		-bottom '<i><a href="http://jrate.sourceforge.net/" target="_top">jRate</a> is developed and maintained by <a href="mailto:corsaro@cs.wustl.edu">Angelo Corsaro</a> and the <a href="http://sourceforge.net/projects/jrate" target="_top">jRate project development team</a></i>' \
		-link http://java.sun.com/j2se/1.5.0/docs/api \
		-author \
		-public

all-local: gcc.build-stamp docs.build-stamp finished-stamp

if ALLOW_MISMATCHED_GCC
CHECK_GCC_VERSION =
else
CHECK_GCC_VERSION = \
	if $(FGREP) 'const char version_string[] = "$(JRATE_GCC_VERSION)";' '$(gcc_srcdir)/gcc/version.c' &>/dev/null; then :; else \
		(echo 'ERROR: GCC version mismatch, expected $(JRATE_GCC_VERSION) in $(gcc_srcdir)'; \
		echo 'ERROR: instead I got version "'`cut -f2 -d\" '$(gcc_srcdir)/gcc/version.c'`'"'; \
		echo 'ERROR: If this is really OK, run ./configure with --with-mismatched-gcc') &>2; \
		exit 1; \
	fi;
endif # ALLOW_MISMATCHED_GCC

gcc.source-stamp:
if !INSANE_GCC
	@if test -d $(gcc_srcdir); then \
		if test -x $(gcc_srcdir)/configure; then :; else \
			(echo "ERROR:"; \
			echo "ERROR:  You have a $(gcc_srcdir) directory but it confuses me."; \
			echo "ERROR:  It should be the top level of the GCC $(JRATE_GCC_VERSION) source tree."; \
			echo "ERROR:") >&2; \
			exit 1; \
		fi; \
		if test -f $(gcc_srcdir)/gcc/version.c; then :; else \
			(echo "ERROR:"; \
			echo "ERROR:  You have a $(gcc_srcdir) directory but it confuses me."; \
			echo "ERROR:  It's a source tree, but it doesn't look like the GCC source tree!"; \
			echo "ERROR:  It should be the top level of the GCC $(JRATE_GCC_VERSION) source tree."; \
			echo "ERROR:") >&2; \
			exit 1; \
		fi; \
		if test -d $(gcc_srcdir)/libstdc++-v3; then :; else \
			(echo "ERROR:"; \
			echo "ERROR:  You have a $(gcc_srcdir) directory but it confuses me."; \
			echo "ERROR:  It appears to be missing the C++ component.  If you are unpacking"; \
			echo "ERROR:  from sources, I need the -core, -g++, and -java tarballs."; \
			if test "x$(CVS)" = x; then :; else \
				echo "ERROR:  If you had a CVS checkout that was interrupted, try going into"; \
				echo "ERROR:  $(gcc_srcdir) and executing this command:"; \
				echo "ERROR:"; \
				echo "ERROR:         $(CVS) -z9 update -dP -r $(GCC_CVS_TAG)" >&2; \
			fi; \
			echo "ERROR:") >&2; \
			exit 1; \
		fi; \
		if test -d $(gcc_srcdir)/libjava; then :; else \
			(echo "ERROR:"; \
			echo "ERROR:  You have a $(gcc_srcdir) directory but it confuses me."; \
			echo "ERROR:  It appears to be missing the Java component.  If you are unpacking"; \
			echo "ERROR:  from sources, I need the -core, -g++, and -java tarballs."; \
			if test "x$(CVS)" = x; then :; else \
				echo "ERROR:  If you had a CVS checkout that was interrupted, try going into"; \
				echo "ERROR:  $(gcc_srcdir) and executing this command:"; \
				echo "ERROR:"; \
				echo "ERROR:         $(CVS) -z9 update -dP -r $(GCC_CVS_TAG)" >&2; \
			fi; \
			echo "ERROR:") >&2; \
			exit 1; \
		fi; \
		$(CHECK_GCC_VERSION) \
	else \
		if test "x$(CVS)" = x; then \
			(echo "ERROR:"; \
			echo "ERROR:  You must unpack GCC sources (version $(JRATE_GCC_VERSION))"; \
			echo "ERROR:  into $(gcc_srcdir) before proceeding."; \
			echo "ERROR:") >&2; \
			exit 1; \
		else \
			if test "x$(use_cvs)" = xyes; then \
				echo "Checking out GCC CVS revision $(GCC_CVS_TAG)..."; \
				echo "(...this will take awhile...)"; \
				echo $(CVS) -z9 -q -d :pserver:anoncvs@gcc.gnu.org:/cvs/gcc checkout -d "gcc.$$$$" -P -r $(GCC_CVS_TAG) gcc; \
				$(CVS) -z9 -q -d :pserver:anoncvs@gcc.gnu.org:/cvs/gcc checkout -d "gcc.$$$$" -P -r $(GCC_CVS_TAG) gcc || exit 1; \
				if test -d '$(gcc_srcdir)'; then \
					(echo "ERROR:"; \
					echo "ERROR:  $(gcc_srcdir) magically appeared"; \
					echo "ERROR:  as I was performing the check out!"; \
					echo "ERROR:  Can't complete installation."; \
					echo "ERROR:") >&2; \
					exit 1; \
				else :; \
				fi; \
				echo mv "gcc.$$$$" '$(gcc_srcdir)'; \
				mv "gcc.$$$$" '$(gcc_srcdir)'; \
				echo "done."; \
			else \
				(echo "ERROR:"; \
				echo "ERROR: If you _really_ want me to check out GCC sources from CVS, please"; \
				echo "ERROR: re-issue your 'make' command with 'use_cvs=yes'.  It is recommended"; \
				echo "ERROR: that you download GCC source tarballs yourself---both because it will"; \
				echo "ERROR: take less time (I only need the core, c++, and java components) and"; \
				echo "ERROR: will reduce the load on GCC's CVS server, which is intended for"; \
				echo "ERROR: GCC development, not download, tasks."; \
				echo "ERROR:") >&2; \
				exit 1; \
			fi; \
		fi; \
	fi
endif # !INSANE_GCC
	@if test -d '$(top_builddir)/gcc'; then \
		if test `cd '$(top_builddir)/gcc' && pwd` != `cd '$(gcc_srcdir)' && pwd`; then \
			if test -L gcc; then \
				rm -f gcc; \
			else \
				(echo 'WARNING:'; \
				echo 'WARNING: $(top_builddir)/gcc exists and is NOT the same as $(gcc_srcdir) !'; \
				echo 'WARNING: If you encounter problems, please resolve this and try again.'; \
				echo 'WARNING:') >&2; \
			fi; \
		else :; \
		fi; \
	else :; \
	fi
	@if test -d gcc; then :; else \
		echo 'Linking $(top_builddir)/gcc to $(gcc_srcdir)'; \
		$(LN_S) '$(gcc_srcdir)' '$(top_builddir)/gcc'; \
	fi
	echo timestamp > gcc.source-stamp

if USING_STANDARD_PATCH
  JRATE_PATCHFILE = $(top_srcdir)/src/native/gcj-patches/diff/jRate-patch.diff
else
  JRATE_PATCHFILE = $(top_srcdir)/src/native/gcj-patches/diff/jRate-patch.$(jrate_patch).diff
endif

gcc.patch-stamp: gcc.source-stamp
	(cd $(gcc_srcdir) && \
		$(PATCH) -p0 -N && echo timestamp > jRate-stamp) \
			< $(JRATE_PATCHFILE); \
	echo timestamp > gcc.patch-stamp

gcc.setup-stamp: gcc.patch-stamp
	@echo "Copying jRate-gc files"
	cp $(top_srcdir)/src/native/gcj-patches/jRate-gc.cc $(gcc_srcdir)/libjava
	cp $(top_srcdir)/src/native/gcj-patches/jRate-gc.h $(gcc_srcdir)/libjava/include
	@echo "Copying rtjavaprims.h to $(gcc_srcdir)/libjava/gcj"
	cp $(top_srcdir)/src/native/gcj-patches/rtjavaprims.h $(gcc_srcdir)/libjava/gcj
	@echo "Copying memory-areas.h to $(gcc_srcdir)/libjava/include"
	cp $(top_srcdir)/src/native/gcj-patches/memory-areas.h $(gcc_srcdir)/libjava/include
	@echo "Populating java/lang..."
	cp $(top_srcdir)/src/native/gcj-patches/natThread.h $(gcc_srcdir)/libjava/java/lang
	@echo "Populating java/util..."
	cp $(top_srcdir)/src/native/gcj-patches/natIdentityHashMap.cc $(gcc_srcdir)/libjava/java/util
	cp $(top_srcdir)/src/native/gcj-patches/natVector.cc $(gcc_srcdir)/libjava/java/util
	@echo "Populating gnu/gcj/runtime..."
	cp $(top_srcdir)/src/native/gcj-patches/AddressHolder.java $(gcc_srcdir)/libjava/gnu/gcj/runtime
	@echo "Creating sym-links to jrate"
	-$(LN_S) "$(abs_top_srcdir)/src/native/src/jrate" $(gcc_srcdir)/libjava/include/jrate
	@echo "Copying libjRateCore source under GCC source tree..."
	@if test -d "$(gcc_srcdir)/libjRateCore"; then \
		(echo "WARNING:"; \
		echo "WARNING: $(gcc_srcdir)/libjRateCore already exists!"; \
		echo "WARNING: This may cause problems if its a stale copy."; \
		echo "WARNING:") >&2; \
	else \
		echo cp -r "$(abs_top_srcdir)/src/native/src/jrate" "$(gcc_srcdir)/libjRateCore"; \
		cp -r "$(abs_top_srcdir)/src/native/src/jrate" "$(gcc_srcdir)/libjRateCore"; \
	fi
# Yes, this next bit is really screwy.  The intent is to set up things under
# the libjava srcdir, so that we trick it into building our stuff for us.
# However, jRate has traditionally used a different directory structure and
# naming scheme.  For now we keep our structure, but we set things up the
# libjava way when we copy our stuff over.
	@echo "Setting up javax/realtime..."
	@if test -d "$(gcc_srcdir)/libjava/javax/realtime"; then \
		(echo "WARNING:"; \
		echo "WARNING: $(gcc_srcdir)/libjava/javax/realtime already exists!"; \
		echo "WARNING: This may cause problems if its a stale copy."; \
		echo "WARNING:") >&2; \
	else \
		mkdir -p "$(gcc_srcdir)/libjava/javax/realtime/util"; \
		cp "$(abs_top_srcdir)"/src/javax/realtime/*.java "$(gcc_srcdir)/libjava/javax/realtime"; \
		cp "$(abs_top_srcdir)"/src/javax/realtime/util/*.java "$(gcc_srcdir)/libjava/javax/realtime/util"; \
		for natfile in "$(abs_top_srcdir)"/src/native/src/javax/realtime/*.cc; do \
			cp "$$natfile" "$(gcc_srcdir)/libjava/javax/realtime/nat"`basename "$$natfile"`; \
		done; \
	fi
	echo timestamp > gcc.setup-stamp

install-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
	$(MAKE) -C '$(abs_gcc_builddir)' install $(MAKE_GCC_ARGS) DESTDIR=$(DESTDIR)
	$(MAKE) -C docs install
	$(MAKE) -C demos install

uninstall-local:
	@echo '==============================================================================='
	@echo 'ERROR: The uninstall target is not supported by GCC or jRate.'
	@echo '==============================================================================='

# If these targets aren't listed individually, automake ignores them.  Duh.
mostlyclean-local: mostlyclean-local2
clean-local: clean-local2
distclean-local: distclean-local2
maintainer-clean-local: maintainer-clean-local2

.PHONY: mostlyclean-local2 clean-local2 distclean-local2 maintainer-clean-local2
mostlyclean-local2 clean-local2 distclean-local2 maintainer-clean-local2:
	@target=`echo $@ | sed s/-local2//`; \
	$(MAKE) $$target-extras; \
	$(MAKE) -C '$(abs_gcc_builddir)' $$target $(MAKE_GCC_ARGS); \
	$(MAKE) -C docs $$target; \
	$(MAKE) -C script $$target; \
	$(MAKE) -C src $$target; \
	$(MAKE) -C demos $$target

clean-extras:
	-rm -rf gcc-build
distclean-extras:
maintainer-clean-extras:

install-data-hook:
	@echo "Performing post-installation..."
	@echo "Copying headers..."
	mkdir -p $(DESTDIR)$(includedir)/gcj
	cp -p $(top_srcdir)/src/native/gcj-patches/rtjavaprims.h $(DESTDIR)$(includedir)/gcj
	cp -p $(top_srcdir)/src/native/gcj-patches/memory-areas.h $(DESTDIR)$(includedir)/gcj
	mkdir -p $(DESTDIR)$(includedir)/java/lang
	cp -p $(top_srcdir)/src/native/gcj-patches/natThread.h $(DESTDIR)$(includedir)/java/lang
#	mkdir -p $(DESTDIR)$(includedir)/javax/realtime/util
#	cp -p src/native/include/javax/realtime/*.h $(DESTDIR)$(includedir)/javax/realtime
#	cp -p src/native/include/javax/realtime/util/*.h $(DESTDIR)$(includedir)/javax/realtime/util
	@echo "Done with post-installation."

GCC_CONFIGURE_FLAGS = \
	$(EXTRA_GCC_CONFIGURE_FLAGS) \
	$(jrate_config_hash_synchronization) \
	$(jrate_config_pthread_self_cache)

if JRATE_DEBUG
GCC_CONFIGURE_FLAGS += --enable-libgcj-debug
endif
if GCC_CHECKING
GCC_CONFIGURE_FLAGS += --enable-checking
endif
if GCC_ENABLE_SHARED
GCC_CONFIGURE_FLAGS += --enable-shared
else
GCC_CONFIGURE_FLAGS += --disable-shared
endif
if GCC_ENABLE_STATIC
GCC_CONFIGURE_FLAGS += --enable-static
else
GCC_CONFIGURE_FLAGS += --disable-static
endif

gcc.configure-stamp: gcc.setup-stamp
	mkdir -p $(gcc_builddir)
	cd $(gcc_builddir) && \
		CPP='$(CPP)' \
		CXXCPP='$(CXXCPP)' \
		CPPFLAGS='$(CPPFLAGS)' \
		CC='$(CC)' \
		CFLAGS='$(CFLAGS)' \
		CXX='$(CXX)' \
		CXXFLAGS='$(CXXFLAGS)' \
		GCJ='$(GCJ)' \
		GCJFLAGS='$(GCJFLAGS)' \
		GCJH='$(GCJH)' \
		GCJHFLAGS='$(GCJHFLAGS)' \
		LDFLAGS='$(LDFLAGS)' \
		BOOT_CFLAGS='$(BOOT_CFLAGS)' \
		BOOT_LDFLAGS='$(BOOT_LDFLAGS)' \
		T_CFLAGS='$(T_CFLAGS)' \
		$(abs_gcc_srcdir)/configure \
			--host='$(gcc_config_host)' \
			--build='$(gcc_config_build)' \
			--target='$(gcc_config_target)' \
			--disable-jvmpi \
			--enable-java-gc=jRate \
			--enable-threads=posix \
			--enable-languages=c,c++,java \
			--prefix='$(prefix)' \
			--program-prefix=jRate- \
			--disable-interpreter \
			$(GCC_CONFIGURE_FLAGS)
	echo timestamp > gcc.configure-stamp

MAKE_GCC_ARGS = \
	JRATE_SRC_DIR="$(shell cd '$(top_srcdir)' && pwd)" \
	JRATE_BUILD_DIR="$(shell cd '$(top_builddir)' && pwd)" \
	JRATE_GCC_SRC_DIR="$(shell cd '$(gcc_srcdir)' && pwd)" \
	JRATE_GCC_BUILD_DIR="$(shell cd '$(gcc_builddir)' && pwd)" \
	JRATE_LIBGCJ_LDFLAGS="$(LIBS)"

gcc.build-stamp: gcc.configure-stamp
if GCC_BOOTSTRAP
if GCC_LEAN_BOOTSTRAP
	$(MAKE) -C $(gcc_builddir) bootstrap-lean $(MAKE_GCC_ARGS)
else
	$(MAKE) -C $(gcc_builddir) bootstrap $(MAKE_GCC_ARGS)
endif
else
	$(MAKE) -C $(gcc_builddir) $(MAKE_GCC_ARGS)
endif
	echo timestamp > gcc.build-stamp

docs.build-stamp:
	$(MAKE) -C docs
	echo timestamp > docs.build-stamp

finished-stamp: gcc.build-stamp docs.build-stamp
	@echo '==============================================================================='
	@echo 'Congratulations!  You have successfully built jRate.'
	@echo 'Using "make install" now will install jRate in:'
	@echo '        $(prefix)'
	@echo '==============================================================================='
	@echo timestamp > finished-stamp

# Make a single, large patch to the GCC source tree that will build all of
# jRate.
gcc_patchsetdir=gcc-patchset
.PHONY: patchset
patchset: gcc.source-stamp
	@if test -f "$(gcc_srcdir)/jRate-stamp"; then \
		(echo "ERROR:"; \
		echo "ERROR: The GCC sources in"; \
		echo "ERROR:"; \
		echo "ERROR:     $(gcc_srcdir)"; \
		echo "ERROR:"; \
		echo "ERROR: have already had jRate patches applied.  To build the grand unified"; \
		echo "ERROR: patchset, I need clean GCC sources in that directory, or you can"; \
		echo "ERROR: re-configure with --with-gcc-sources=/path/to/clean/gcc/source/tree."; \
		echo "ERROR:") >&2; \
		exit 1; \
	fi
	@if test -d "$(gcc_patchsetdir)"; then \
		(echo "ERROR:"; \
		echo "ERROR: There is already a grand unified patchset directory"; \
		echo "ERROR:"; \
		echo "ERROR:     $(gcc_patchsetdir)"; \
		echo "ERROR:"; \
		echo "ERROR: Please move it."; \
		echo "ERROR:") >&2; \
		exit 1; \
	fi
	cp -rp "$(gcc_srcdir)" "$(gcc_patchsetdir)"
	-rm -f gcc.patch-stamp gcc.setup-stamp
	$(MAKE) gcc.setup-stamp gcc_srcdir="$(gcc_patchsetdir)" gcc_cvs=never
	-rm -f gcc.patch-stamp gcc.setup-stamp
	@(echo "WARNING:"; \
	echo "WARNING: The patchset produced by 'make patchset' does not yet contain the"; \
	echo "WARNING: libjRate and libjRateRT components, but will include the"; \
	echo "WARNING: libjRateCore component.  To build libjRate and libjRateRT, you will"; \
	echo "WARNING: need to apply the patch to GCC, configure it"; \
	echo "WARNING: (with --enable-languages=c,c++,java), build and install it, then"; \
	echo "WARNING: configure jRate with --enable-stage3 and build it."; \
	echo "WARNING:") >&2
	@if test -f "$(top_srcdir)/src/native/src/jrate/CVS/Entries"; then \
		(echo "WARNING:"; \
		echo "WARNING: Your patch will contain CVS files for libjRateCore."; \
		echo "WARNING: To avoid this, do 'make dist', unpack it, and do a 'make patchset'"; \
		echo "WARNING: from that."; \
		echo "WARNING:") >&2; \
	fi
	(echo "jRate $(VERSION) patch for GCC sources $(JRATE_GCC_VERSION)."; \
	echo "Contains libjRateCore and compiler and libgcj changes."; \
	echo "Does not contain libjRate or libjRateRT."; \
	echo "We haven't finished designing this patch-type build yet."; \
	echo "Building a patched GCC won't work without additional modification."; \
	echo; \
	diff -Nur "$(gcc_srcdir)" "$(gcc_patchsetdir)" || true) > "jRate-$(VERSION)-GCC.patch"

# Old pre-autoconf make targets
.PHONY: jRate-gcc jRate-gcc-no-patch jRate-gcc-cvs
jRate-gcc jRate-gcc-no-patch jRate-gcc-cvs:
	@echo '==============================================================================='
	@echo 'The make target '$@' is no longer used for building jRate.'
	@echo 'Further, the requirements on preparing GCC source tree have changed.'
	@echo 'Now, instead of installing them in '../GNU/jRateGCC/gcc', you can simply'
	@echo 'install them in this directory under './gcc'.  Please refer to the INSTALL'
	@echo 'and README files at the top of the source tree for assistance."
	@echo '==============================================================================='
