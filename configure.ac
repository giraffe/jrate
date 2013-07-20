#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)

dnl These set whether it's an *official* jRate release (stable or snapshot)
dnl Anything stable should be tagged in CVS.  Stable versions get tags
dnl like "jRate-0_3_7-3_3_3".
dnl For these, empty string [] is false; anything else (like [yes]) is true
m4_define([_JRATE_IS_STABLE_],           [yes])
m4_define([_JRATE_IS_SNAPSHOT_],         [])

dnl If this release is beta (or alpha or release-candidate or whatever),
dnl give a tag here (like "beta", "rc1", etc.)
m4_define([_JRATE_BETA_TAG_],            [])

dnl Version of this tree and CVS tag (if any)
m4_define([_JRATE_RAW_VERSION_],         [0.3.7.2])
m4_define([_JRATE_GCC_VERSION_],         [3.3.3])
m4_define([_JRATE_CVS_TAG_],             [])

dnl Last stable version and release date
m4_define([_JRATE_BASE_STABLE_VERSION_], [0.3.7.2])
m4_define([_JRATE_STABLE_GCC_VERSION_],  [3.3.3])
m4_define([_JRATE_STABLE_RELEASE_DATE_], [August 06 2005])

dnl These shouldn't need hacking -- extra stuff for unstable/beta trees
m4_define([_JRATE_IS_BETA_],             [ifelse(_JRATE_BETA_TAG_,,,yes)])
m4_define([_GCC_CVS_TAG_],               [gcc_]translit(_JRATE_GCC_VERSION_,[.],[_])[_release])
m4_define([_JRATE_RELEASE_DATE_],        [JRATE_ESYSCMD([date -u])])
m4_define([_JRATE_CVS_BRANCH_],          [m4_default(patsubst(JRATE_ESYSCMD([cat CVS/Tag 2>/dev/null]),[^T],[]),[HEAD])])

dnl Compute the prefix/suffix on base version
m4_define([_JRATE_BASE_PREFIX_],         [ifelse(_JRATE_IS_STABLE_,,[ifelse(_JRATE_IS_BETA_,,cvs-)])])
m4_define([_JRATE_BASE_SUFFIX_],         [m4_default(ifelse(_JRATE_IS_SNAPSHOT_,,,[-]m4_translit(m4_esyscmd([date -u '+%Y%m%d']),[
],[])),_JRATE_BETA_TAG_)])

dnl The base version (the raw version number adorned with "beta", "cvs", etc.)
m4_define([_JRATE_BASE_VERSION_],        _JRATE_BASE_PREFIX_[]_JRATE_RAW_VERSION_[]_JRATE_BASE_SUFFIX_)

dnl The complete version identifier.
m4_define([_JRATE_VERSION_],             [_JRATE_BASE_VERSION_-_JRATE_GCC_VERSION_])

dnl These shouldn't need hacking -- extra stuff for stable trees
m4_define([_STABLE_GCC_CVS_TAG_],        [gcc_]translit(_JRATE_STABLE_GCC_VERSION_,[.],[_])[_release])
m4_define([_JRATE_STABLE_VERSION_],      [_JRATE_BASE_STABLE_VERSION_-_JRATE_STABLE_GCC_VERSION_])
m4_define([_JRATE_STABLE_CVS_TAG_],      [translit(jRate-_JRATE_STABLE_VERSION_,[.],[_])])

AC_INIT([jRate], [_JRATE_VERSION_], [jrate-devel@lists.sourceforge.net])

# sanity checks on defined version values
ifelse(_JRATE_IS_STABLE_,,
  [ifelse(_JRATE_IS_BETA_,,,
    [ifelse(_JRATE_IS_SNAPSHOT_,,,
      [m4_errprint([ERROR: Is this tree beta or snapshot?!  Please re-work configure.ac.
])
      m4_exit(1)])])]
  [ifelse(_JRATE_RAW_VERSION_,_JRATE_BASE_STABLE_VERSION_,
    [m4_errprint([WARNING: If this jRate version is beta/unstable, please consider changing [_JRATE_RAW_VERSION_] to something other than the last stable version in configure.ac.
])])],
  [ifelse(_JRATE_RAW_VERSION_,_JRATE_BASE_STABLE_VERSION_,,
    [m4_errprint([ERROR: For stable versions of jRate, [_JRATE_RAW_VERSION_] and [_JRATE_BASE_STABLE_VERSION_] must match; please re-work configure.ac.
])
    m4_exit(1)])]
  [ifelse(_JRATE_IS_BETA_,,
      [ifelse(_JRATE_IS_SNAPSHOT_,,,
        [m4_errprint([ERROR: Is this tree stable or snapshot?!  Please re-work configure.ac.
])
        m4_exit(1)])],
    [m4_errprint([ERROR: Is this tree stable or beta?!  Please re-work configure.ac.
])
    m4_exit(1)])])

# set up VERSION file from one of the VERSION*.ac files (but only if building
# from CVS)
ifelse(m4_esyscmd([test -d .svn && echo -n yes]),yes,
  [ifelse(_JRATE_IS_STABLE_,,
    [ifelse(_JRATE_IS_BETA_,,
      [ifelse(_JRATE_IS_SNAPSHOT_,,
        [m4_syscmd([sed 's,@VERSION@,]_JRATE_VERSION_[,g;s,@RELEASE_DATE@,]_JRATE_RELEASE_DATE_[,g;s,@CVS_BRANCH@,]_JRATE_CVS_BRANCH_[,g;s,@STABLE_VERSION@,]_JRATE_STABLE_VERSION_[,g;s,@STABLE_CVS_TAG@,]_JRATE_STABLE_CVS_TAG_[,g;s,@STABLE_RELEASE_DATE@,]_JRATE_STABLE_RELEASE_DATE_[,g' VERSION-unstable.ac >VERSION])],
        [m4_syscmd([sed 's,@VERSION@,]_JRATE_VERSION_[,g;s,@RELEASE_DATE@,]_JRATE_RELEASE_DATE_[,g;s,@CVS_BRANCH@,]_JRATE_CVS_BRANCH_[,g;s,@STABLE_VERSION@,]_JRATE_STABLE_VERSION_[,g;s,@STABLE_CVS_TAG@,]_JRATE_STABLE_CVS_TAG_[,g;s,@STABLE_RELEASE_DATE@,]_JRATE_STABLE_RELEASE_DATE_[,g' VERSION-snapshot.ac >VERSION])])],
      [m4_syscmd([sed 's,@VERSION@,]_JRATE_VERSION_[,g;s,@RELEASE_DATE@,]_JRATE_RELEASE_DATE_[,g;s,@CVS_BRANCH@,]_JRATE_CVS_BRANCH_[,g;s,@STABLE_VERSION@,]_JRATE_STABLE_VERSION_[,g;s,@STABLE_CVS_TAG@,]_JRATE_STABLE_CVS_TAG_[,g;s,@STABLE_RELEASE_DATE@,]_JRATE_STABLE_RELEASE_DATE_[,g' VERSION-beta.ac >VERSION])])],
      [m4_syscmd([sed 's,@STABLE_VERSION@,]_JRATE_STABLE_VERSION_[,g;s,@STABLE_CVS_TAG@,]_JRATE_STABLE_CVS_TAG_[,g;s,@STABLE_RELEASE_DATE@,]_JRATE_STABLE_RELEASE_DATE_[,g' VERSION.ac >VERSION])])])

# We expose this to our Makefile so that we can re-configure the same
# way if we do any post-bootstrap building.
JRATE_CONFIGURE_ARGS="$@"

AC_COPYRIGHT(dnl
[This script contains source from the jRate source tree.  Some of this material
is Copyright (C) 2005 Morgan Deters <mdeters@morgandeters.com>.
Unlimited permission is granted to everyone to copy, distribute, and modify
those portions of this script.])
AC_REVISION([$Revision: 685 $])

# Safety check to make sure $srcdir points to real source directory...
# If jRate-patch.diff stops existing, point this to something else
# that does exist in the source directory.
AC_CONFIG_SRCDIR([src/native/gcj-patches/diff/jRate-patch.diff])

# All our m4 crap
AC_CONFIG_MACRO_DIR([config])

# We find a list of alternative patches at autoconf time.  If other patches
# are dropped into the right dir after autoconf runs, they'll be supported
# by --with-patch but not listed in --with-patch=help.
m4_define([_jrate_patchesreldir_], [src/native/gcj-patches/diff])
jrate_patchesdir=${srcdir}/_jrate_patchesreldir_
if test "x$with_patch" = xhelp; then
  echo "The following alternative patches are available for jRate _JRATE_VERSION_:"
  echo
m4_esyscmd([
    for p in ]_jrate_patchesreldir_[/jRate-patch.*.diff; do
      basep=`echo $p | sed 's,.*/jRate-patch\.\(.*\)\.diff,\1,'`
      docp=`cat "]_jrate_patchesreldir_[/jRate-patch.${basep}.desc" 2>/dev/null`
      readmep=
      test -f "]_jrate_patchesreldir_[/README.$basep" && readmep=" *"
      echo "cat <<EOF"
      echo "AS_HELP_STRING([$basep],[${docp:-(no description available)}${readmep}])"
      echo "EOF"
    done
])
  echo
  echo "If you don't specify --with-patch, the standard jRate patch is used."
  echo "* = this patch has a README in the jRate source tree under"
  echo "    _jrate_patchesreldir_"
  exit 0
fi

echo "****************************************************************"
echo "The jRate build process is under construction."
echo "If you have difficulties configuring, compiling, or using jRate,"
echo "please contact us at:"
echo "    jrate-devel@lists.sourceforge.net"
echo "...or enter an item on the jRate bugs tracker at:"
echo "    http://jrate.sourceforge.net/bugs"
echo "Thank you."
echo "****************************************************************"

# Use /usr/pkg stuff?
jrate_pkgbin_path=
AC_ARG_WITH(pkg,
            AS_HELP_STRING([--with-pkg],
                           [use software installed in /usr/pkg tree]), [
   jrate_pkgbin_path=/usr/pkg/bin
   CPPFLAGS="$CPPFLAGS -I/usr/pkg/include"
   LDFLAGS="$LDFLAGS -L/usr/pkg/lib"
   BOOT_CFLAGS="$BOOT_CFLAGS -I/usr/pkg/include"
   BOOT_LDFLAGS="$BOOT_LDFLAGS -I/usr/pkg/include -L/usr/pkg/lib"
   T_CFLAGS="$T_CFLAGS -I/usr/pkg/include -L/usr/pkg/lib"
   echo 'Using /usr/pkg/include and /usr/pkg/lib (and /usr/pkg/bin for some things)'
])

AC_ARG_WITH(cross-host,
AS_HELP_STRING([--with-cross-host=HOST],[configuring with a cross compiler]))

# Get build, host, and target
AC_CANONICAL_BUILD
AC_CANONICAL_HOST
AC_CANONICAL_TARGET

# This is important because otherwise GCC's configure may not find
# crossed binutils, which are named ${target_alias}-ld, etc.
JRATE_CHECK_FOR_GCC_CONFIGURE_TRIPLE

# JRATE_REQUIRE_SOURCE_AND_BUILD_DIRECTORIES_DIFFERENT

# I feel justified in using -Wno-portability: yes, we require GNU Make
# (so does GCC), so we can ignore lesser makes and their petty concerns.
AM_INIT_AUTOMAKE([foreign check-news -Wall -Wno-portability 1.7])
AC_CONFIG_HEADERS([jRate-config.h])
AH_TOP(m4_translit([/* Generated from __file__ $Revision: 685 $ */], [$]))
AH_TOP([@%:@ifndef __JRATE_AUTOCONF_CONFIG_H
@%:@define __JRATE_AUTOCONF_CONFIG_H])
AH_BOTTOM([@%:@endif /* __JRATE_AUTOCONF_CONFIG_H */])

# Location of our replacements to functions that are unavailable on
# some platforms...
AC_CONFIG_LIBOBJ_DIR([src/lib])

# Static libraries on by default.
AC_ENABLE_STATIC

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# We don't actually need gcj, but this makes automake happy for some reason.
# Perhaps because we have java_JAVA targets.
AM_PROG_GCJ

AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_FGREP
AC_PROG_MAKE_SET
AC_PROG_AWK
AC_PROG_LIBTOOL

#JRATE_NO_CROSS_COMPILING_ALLOWED

AC_CHECK_TOOL(AR, ar, false)

if test "x$AR" = false; then
  case $build_os in
    solaris*)  AC_MSG_ERROR([The tool 'ar' is rqeuired for building gcc.
You may need to include /usr/ccs/bin on your PATH (though it may include
non-GNU tools, so you should append, rather than prepend, it).  However,
you may still have build problems using the Sun linker, in which case you
should install a recent version of GNU binutils and point your PATH to it.]) ;;
    *)         AC_MSG_ERROR([The tool 'ar' is required for building gcc.
I recommend you obtain GNU binutils, install it, and ensure that your PATH
points to it.]) ;;
  esac
fi

# Additional envariables that we'll honor when building jRate.
AC_ARG_VAR([GCJ], [Java compiler command])
AC_ARG_VAR([GCJFLAGS], [Java compiler flags])
AC_ARG_VAR([GCJH], [Java CNI header generation command])
AC_ARG_VAR([GCJHFLAGS], [Java CNI header generation flags])
AC_ARG_VAR([JAR], [JAR archiver])
AC_ARG_VAR([JAVAC], [Java bytecode compiler command])
AC_ARG_VAR([JAVACFLAGS], [Java bytecode compiler flags])
AC_ARG_VAR([BOOT_CFLAGS], [GCC stage 2 CFLAGS])
AC_ARG_VAR([BOOT_LDFLAGS], [GCC stage 2 LDFLAGS])
AC_ARG_VAR([T_CFLAGS], [GCC-for-target CFLAGS])

# Check for more programs...

# sysctl especially useful on *BSD and Mac OS X
JRATE_PATH_PROG_FOR_DETECTION([sysctl], [darwin*|netbsd*|openbsd*|freebsd*], [BSD-ish])
# Solaris analog of sysctl
JRATE_PATH_PROG_FOR_DETECTION([getconf], [solaris*], [Solaris])
# Solaris processor info
JRATE_PATH_PROG_FOR_DETECTION([psrinfo], [solaris*], [Solaris])
# sometimes needed
JRATE_PATH_PROG_FOR_DETECTION([dmesg], [netbsd*|openbsd*|freebsd*], [some BSD])

jrate_javabin_path=$PATH
for dir in /usr/bin /bin $jrate_pkgbin_path /usr/java/bin /usr/j2sdk/bin /usr/jdk/bin /usr/java*/*/bin /usr/j2sdk*/*/bin /usr/jdk*/*/bin /usr/kaffe*/bin /usr/lib/java/bin /usr/lib/j2sdk/bin /usr/lib/jdk/bin /usr/lib/kaffe/bin /usr/lib/fjsdk/bin /usr/lib/sablevm/bin; do
  test -d "$dir" && jrate_javabin_path=$jrate_javabin_path${PATH_SEPARATOR}$dir
done

dnl AC_CHECK_TOOL(GCJH, [gcjh], [])
dnl AC_PATH_PROGS(JAVAC, [javac jikes], [], [$jrate_java_path])
dnl AC_PATH_PROGS(JAR, [jar fastjar], [], [$jrate_java_path])

dnl JRATE_REQUIRE_TOOL(perl)
JRATE_REQUIRE_TOOL(patch)

AC_PATH_PROG(CVS, cvs, [])
AC_PATH_PROG(CVSDO, cvsdo, [])
AC_PATH_PROGS(JAVADOC, [javadoc gjdoc javadoc.kaffe], [], [$jrate_javabin_path])

# Checks for libraries.
AC_CHECK_LIB([pthread], [pthread_create])
if test "x$ac_cv_lib_pthread_pthread_create" = no; then
  AC_MSG_FAILURE([Sorry, jRate requires a POSIX threading library "libpthread".]);
fi

JRATE_REQUIRE_FUNCTION([nanosleep], [rt posix4])

# Apple doesn't like standards.
JRATE_SEARCH_FUNCTION([clock_getres], [rt posix4], [], [{
  # These are mach equivalents on darwin.
  JRATE_HAVE_FUNCTION([clock_get_time])
  JRATE_HAVE_FUNCTION([clock_get_attributes])
}])

# Solaris, linux, and freebsd have sched_setscheduler()...
# ...but apparently NOT netbsd, openbsd, or darwin
JRATE_SEARCH_FUNCTION([sched_setscheduler], [rt posix4], [Can't find sched_setscheduler().
jRate will have to use pthread_setschedparam() instead to set the scheduling
class.  You might want to check if this provides real-time guarantees on your
platform.])

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([fcntl.h stddef.h stdlib.h string.h sys/time.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_HEADER_TIME
AC_STRUCT_TM
AC_C_VOLATILE
AC_CHECK_TYPES([ptrdiff_t])

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_MMAP
AC_TYPE_SIGNAL
AC_CHECK_FUNCS([gettimeofday memset munmap])

# jRate configuration conditionals

JRATE_ARG_DISABLE([smp], [whether SMP support should be provided],
                  [Don't include SMP support (default is to support SMP)],
                  [], [SMP],
                  [JRATE_HAS_SMP], [for SMP support])

JRATE_ARG_DISABLE([rtscheduler], [whether jRate should enter real-time scheduling mode],
                  [Don't attempt to use a real-time scheduler (default is to use real-time scheduler)],
                  [], [],
                  [JRATE_SHOULD_USE_RT_SCHEDULER], [if jRate should use a real-time scheduler])

JRATE_ARG_ENABLE([hash-synchronization], [whether to use hash synchronization],
                 [Use global hash table for monitor locks (default is to let libgcj decide based on target platform)],
                 [], [], [], [], [check],
                 [$jrate_resultval (user-specified)], [let libgcj decide])

case $target_cpu in
  i?86)
    if test "x$jrate_hash_synchronization_default" = xyes; then
      jrate_hash_synchronization=no
      AC_MSG_WARN([for now on x86, I'm forcing hash-synchronization off (specify --enable-hash-synchronization=check to force me to let libgcj decide, but you'll probably get build errors)])
    fi ;;
esac

JRATE_ARG_ENABLE([pthread-self-cache], [whether to use a pthread_self() cache],
                 [Use a cache for pthread_self() (default is to let libgcj decide based on target platform)],
                 [], [], [], [], [check],
                 [$jrate_resultval (user-specified)], [let libgcj decide])

if test "x$enable_pthread_self_cache_default" != xno && test "x$jrate_hash_synchronization" = xno; then
  jrate_pthread_self_cache=no
  AC_MSG_WARN([pthread_self() cache forced off when hash-synchronization is off (specify --enable-pthread-self-cache=check to force me to let libgcj decide, but you'll probably get build errors)])
fi

JRATE_ARG_ENABLE([debug], [whether to enable debugging],
                 [Turn on debugging (default no)],
                 [], [JRATE_DEBUG], [JRATE_DEBUG], [to enable debugging.])

JRATE_ARG_ENABLE([gcc-checking], [whether to enable GCC checking options],
                 [Turn on checking of GCC trees, etc. (default no)],
                 [], [GCC_CHECKING])

AM_CONDITIONAL(GCC_ENABLE_SHARED, test "x$enable_shared" != x)
AM_CONDITIONAL(GCC_ENABLE_STATIC, test "x$enable_static" != x)

# JRATE_ARG_ENABLE([gcc-shared], [whether to build GCC shared libraries],
#                  [Turn on GCC shared libs (default same as toplevel)],
#                  [], [GCC_ENABLE_SHARED], [], [], [$enable_shared])

# JRATE_ARG_ENABLE([gcc-static], [whether to build GCC static libraries],
#                  [Turn on GCC static libs (default same as toplevel)],
#                  [], [GCC_ENABLE_STATIC], [], [], [$enable_static])

AM_CONDITIONAL(BUILD_AS_CROSS_COMPILER, test "x$target" != "x$host")
if test "x$target" = "x$host" && test "x$cross_compiling" = xno; then
  JRATE_ARG_DISABLE([bootstrap], [whether to bootstrap GCC],
                    [Don't bootstrap GCC (default is to bootstrap)],
                    [gcc_bootstrap], [GCC_BOOTSTRAP])

  JRATE_ARG_ENABLE([leanstrap], [whether to leanly bootstrap GCC],
                   [Leanly bootstrap GCC (default no)],
                   [gcc_leanstrap], [GCC_LEAN_BOOTSTRAP])
  if test "x$gcc_bootstrap" = xno && test "x$gcc_leanstrap" = xyes; then
    AC_MSG_WARN([won't leanstrap as requested, because not bootstrapping])
  fi
else
  case "x$enable_bootstrap$enable_leanstrap" in
    x|xno|xnono)
      ;;
    *)
      if test "x$cross_compiling"; then
        AC_MSG_WARN([won't bootstrap, you're building with a cross-compiler host])
        jrate_no_bootstrap_reason='building with cross host'
      else
        AC_MSG_WARN([won't bootstrap, you're building jRate as a cross-compiler])
        jrate_no_bootstrap_reason='building a cross'
      fi ;;
  esac
  gcc_bootstrap=no
  gcc_leanstrap=no
  AM_CONDITIONAL(GCC_BOOTSTRAP, false)
  AM_CONDITIONAL(GCC_LEAN_BOOTSTRAP, false)
  AC_MSG_CHECKING([whether to bootstrap GCC])
  AC_MSG_RESULT([no (${jrate_no_bootstrap_reason})])
  AC_MSG_CHECKING([whether to leanly bootstrap GCC])
  AC_MSG_RESULT([no (${jrate_no_bootstrap_reason})])
fi

JRATE_ARG_WITH_STRING([gcc-sources], [for location of GCC sources],
                      [Absolute path to gcc sources (default builddir/gcc)
                          WARNING - this source tree will be patched!],
                      [gcc_srcdir],
                      [], [], [],
                      ["`pwd`/gcc"], [], dnl default value
                      [/.*], [], [an absolute path])

JRATE_ARG_ENABLE([insane-gcc], [whether an insane GCC source tree is okay],
                 [Don't sanity-check gcc sources (default is sanity)],
                 [], [INSANE_GCC])

JRATE_ARG_ENABLE([mismatched-gcc], [whether mismatched GCC version is okay],
                 [Allow mismatched GCC source version (default no)],
                 [allow_mismatched_gcc], [ALLOW_MISMATCHED_GCC])
# should emit a warning if insane_gcc is on and mismatched_gcc is off

JRATE_ARG_WITH_STRING([extra-gcc-configuration],
                      [for extra GCC configure flags to use],
                      [Use additional flags when configuring GCC])
EXTRA_GCC_CONFIGURE_FLAGS="${jrate_extra_gcc_configuration}"

JRATE_ARG_MEMORY_AREA(immortal, [immortal memory], [64])
JRATE_ARG_MEMORY_AREA(heap, [heap memory], [32])
JRATE_ARG_MEMORY_AREA(method-area, [method area memory], [32])
JRATE_ARG_MEMORY_AREA(scopes-arena, [scopes arena], [64])

jrate_patch=
jrate_patch_result='using standard patch'
AC_MSG_CHECKING([whether alternative patch was requested])
AC_ARG_WITH(patch,
AS_HELP_STRING([--with-patch=file],[Use alternative GCC patchset (try --with-patch=help)]),
[if test "x${withval}" = x; then
  AC_MSG_ERROR([you must specify a patchset name for --with-patch])
elif test -f "${jrate_patchesdir}/jRate-patch.${withval}.diff"; then
  jrate_patch="${withval}"
  jrate_patch_result="using patch: ${jrate_patch}"
else
  AC_MSG_ERROR([no such patchset "${withval}";
To use --with-patch, the patchset must exist in ${jrate_patchesdir}])
fi],[jrate_patch=])
AM_CONDITIONAL(USING_STANDARD_PATCH, test x$jrate_patch = x)
AC_MSG_RESULT([$jrate_patch_result])

# FIXME - don't do all this if $build != $target ?
JRATE_DETECT_NCPU
JRATE_DETECT_CPU_MHZ
JRATE_DETECT_PAGESIZE
JRATE_DETECT_THREADMAX

# Build dir setup
gcc_srcdir="${jrate_gcc_srcdir}"
gcc_builddir_name=gcc-build
gcc_builddir='$(top_builddir)/'"$gcc_builddir_name"

AC_SUBST(gcc_srcdir)
AC_SUBST(gcc_builddir_name)
AC_SUBST(gcc_builddir)
AC_SUBST(jrate_patch)

jrate_config_hash_synchronization=
case ${jrate_hash_synchronization} in
  yes) jrate_config_hash_synchronization=--enable-hash-synchronization ;;
  no)  jrate_config_hash_synchronization=--disable-hash-synchronization ;;
esac
AC_SUBST(jrate_config_hash_synchronization)

jrate_config_pthread_self_cache=
case ${jrate_pthread_self_cache} in
  yes) jrate_config_pthread_self_cache=--enable-pthread-self-cache ;;
  no)  jrate_config_pthread_self_cache=--disable-pthread-self-cache ;;
esac
AC_SUBST(jrate_config_pthread_self_cache)

if test -n "$with_cross_host" && test x"$with_cross_host" != x"no"; then
  toolexecdir='$(exec_prefix)/$(target_alias)'
  toolexeclibdir='$(toolexecdir)/lib'
else
  toolexecdir='$(libdir)/gcc-lib/$(target_alias)'
  toolexeclibdir='$(libdir)'
fi
if test "$GCC" = yes && $CC -print-multi-os-directory > /dev/null 2>&1; then
  multiosdir=/`$CC -print-multi-os-directory`
else
  multiosdir=
fi
toolexeclibdir=${toolexeclibdir}${multiosdir}
AC_SUBST(toolexecdir)
AC_SUBST(toolexeclibdir)

# copy values from m4 macros
JRATE_BASE_VERSION='_JRATE_BASE_VERSION_'
JRATE_GCC_VERSION='_JRATE_GCC_VERSION_'
GCC_CVS_TAG='_GCC_CVS_TAG_'

AC_SUBST(JRATE_BASE_VERSION)
AC_SUBST(JRATE_GCC_VERSION)
AC_SUBST(GCC_CVS_TAG)

AC_SUBST(JRATE_CONFIGURE_ARGS)
AC_SUBST(EXTRA_GCC_CONFIGURE_FLAGS)

JRATE_IS_STABLE=_JRATE_IS_STABLE_
JRATE_IS_BETA=_JRATE_IS_BETA_
JRATE_IS_SNAPSHOT=_JRATE_IS_SNAPSHOT_
AC_SUBST(JRATE_IS_STABLE)
AC_SUBST(JRATE_IS_BETA)
AC_SUBST(JRATE_IS_SNAPSHOT)

AH_VERBATIM(VERSION,
[/* Version number of package; guarded so it doesn't override libjava */
@%:@ifndef VERSION
@%:@undef VERSION
@%:@endif /* VERSION */])

AH_VERBATIM(PACKAGE,
[/* Name of package; guarded so it doesn't override libjava */
@%:@ifndef PACKAGE
@%:@undef PACKAGE
@%:@endif /* PACKAGE */])

AH_VERBATIM(PACKAGE_NAME,
[/* Define to the full name of this package. */
@%:@ifndef PACKAGE_NAME
@%:@undef PACKAGE_NAME
@%:@endif /* PACKAGE_NAME */])

AH_VERBATIM(PACKAGE_STRING,
[/* Define to the full name and version of this package. */
@%:@ifndef PACKAGE_STRING
@%:@undef PACKAGE_STRING
@%:@endif /* PACKAGE_STRING */])

AH_VERBATIM(PACKAGE_TARNAME,
[/* Define to the one symbol short name of this package. */
@%:@ifndef PACKAGE_TARNAME
@%:@undef PACKAGE_TARNAME
@%:@endif /* PACKAGE_TARNAME */])

AH_VERBATIM(PACKAGE_VERSION,
[/* Define to the version of this package. */
@%:@ifndef PACKAGE_VERSION
@%:@undef PACKAGE_VERSION
@%:@endif /* PACKAGE_VERSION */])

# Output
AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/javax/Makefile
                 src/native/Makefile
                 src/native/gcj-patches/Makefile
                 src/native/gcj-patches/diff/Makefile
                 src/native/include/Makefile
                 src/native/src/Makefile
                 src/native/src/test/Makefile
                 src/native/src/test/Thread/Makefile
                 demos/Makefile
                 demos/DeadlineMissHandler/Makefile
                 demos/PeriodicTimer/Makefile
                 docs/Makefile
                 script/Makefile])
AC_OUTPUT

echo
echo "==============================================================================="
echo "jRate $PACKAGE_VERSION is now configured.  Just type 'make'."
echo "jRate version : _JRATE_BASE_VERSION_"
echo "GCC version   : _JRATE_GCC_VERSION_"
echo
echo "If you are building for another target (like e.g. an embedded target), you"
echo "might want to review the system information I gathered in the file"
echo "jRate-config.h to ensure that it is correct for your target.  In particular,"
echo "the settings JRATE_NCPU, JRATE_PAGE_SIZE, JRATE_THREADMAX, CLOCK_FREQUENCY,"
echo "and the four default memory area sizes may need attention.  All of these"
echo "settings are user-specifiable with arguments to this configure script and,"
echo "for now, you MUST specify them to this script rather than just changing the"
echo "values in jRate-config.h directly."
echo "==============================================================================="
if test "x$jrate_smp" != xyes; then
  echo "This build tree of jRate has been configured for UNIPROCESSOR targets."
  echo "It will crash on multiprocessor targets!"
  echo "Please re-run configure with --enable-smp to build for multiprocessors."
  echo "==============================================================================="
fi

if test -d "$gcc_srcdir"; then :; else
  if test "x${CVS}" = x; then
    echo "You have not unpacked GCC sources and I could not find a CVS client."
    echo "You must unpack the proper version ($JRATE_GCC_VERSION) of the GCC sources"
    echo "into this directory:"
    echo
    echo "    $gcc_srcdir"
    echo
    echo "before building jRate."
  else
    echo "If you don't unpack GCC sources into this directory before building:"
    echo
    echo "    $gcc_srcdir"
    echo
    echo "then the proper version of the GCC sources ($JRATE_GCC_VERSION) will be retrieved"
    echo "from CVS (tag $GCC_CVS_TAG) for you."
  fi
  echo "==============================================================================="
fi

jrate_conflict_detected_files=
for file in bin/gcc-_JRATE_GCC_VERSION_ share/java/libgcj-_JRATE_GCC_VERSION_.jar lib/gcc-lib/$gcc_config_target/_JRATE_GCC_VERSION_/cc1 lib/gcc/$gcc_config_target/_JRATE_GCC_VERSION_/cc1; do
  if test -f "$prefix/$file" || test -d "$prefix/$file"; then
    jrate_conflict_detected_files="$jrate_conflict_detected_files $file"
  fi
done

if test "x$jrate_conflict_detected_files" = x; then :; else
  echo "CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION"
  echo "It looks as though you have a GCC _JRATE_GCC_VERSION_ installation in $prefix."
  echo "I detected these files/directories:"
  for file in ${jrate_conflict_detected_files}; do
    echo "    $prefix/$file"
  done
  echo "IF YOU DO A 'make install' YOU MAY BREAK YOUR EXISTING GCC INSTALLATION."
  echo "If you're sure that this installation is another jRate installation,"
  echo "you can ignore this warning."
  echo "CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION CAUTION"
  echo "==============================================================================="
fi
