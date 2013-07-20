#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT([jRate-core], [_LIBJRATECORE_VERSION_], [jrate-devel@lists.sourceforge.net])
AC_CONFIG_SRCDIR([Config.h])

# This works around the fact that libtool configuration may change LD
# for this particular configuration, but some shells, instead of
# keeping the changes in LD private, export them just because LD is
# exported.
ORIGINAL_LD_FOR_MULTILIBS=$LD

dnl We may get other options which we dont document:
dnl --with-target-subdir, --with-multisrctop, --with-multisubdir

if test "x[$]{with_target_subdir}" != x && \
   test "[$]{srcdir}" = "."; then
  if test "[$]{with_target_subdir}" != "."; then
    libjRateCore_basedir="[$]{srcdir}/[$]{with_multisrctop}../"
  else
    libjRateCore_basedir="[$]{srcdir}/[$]{with_multisrctop}"
  fi
else
  libjRateCore_basedir="[$]{srcdir}/"
fi
AC_SUBST(libjRateCore_basedir)
# AC_CONFIG_AUX_DIR($libjRateCore_basedir..)
#if :; then :; else
  # This overrides the previous occurrence for automake, but not for
  # autoconf, which is exactly what we want.
  # AC_CONFIG_AUX_DIR(..)
#fi

AC_CANONICAL_SYSTEM

# This works around an automake problem.
mkinstalldirs="`cd $ac_aux_dir && ${PWDCMD-pwd}`/mkinstalldirs"
AC_SUBST(mkinstalldirs)

# I feel justified in using -Wno-portability: yes, we require GNU Make
# (so does GCC), so we can ignore lesser makes and their petty concerns.
AM_INIT_AUTOMAKE([foreign no-define -Wall -Wno-portability 1.7])

AM_MAINTAINER_MODE

dnl We use these options to decide which functions to include.
AC_ARG_WITH(target-subdir,
AS_HELP_STRING([--with-target-subdir=SUBDIR],[configuring in a subdirectory]))
AC_ARG_WITH(cross-host,
AS_HELP_STRING([--with-cross-host=HOST],[configuring with a cross compiler]))

dnl Default to --enable-multilib
AC_ARG_ENABLE(multilib,
AS_HELP_STRING([--enable-multilib],[build many library versions (default)]),
[case "${enableval}" in
  yes) multilib=yes ;;
  no)  multilib=no ;;
  *)   AC_MSG_ERROR(bad value ${enableval} for multilib option) ;;
 esac], [test -z "$with_target_subdir" && multilib=no || multilib=yes])dnl

AC_PROG_CC
AC_PROG_LIBTOOL

if test -z "$with_target_subdir" || test "$with_target_subdir" = "."; then
   COMPPATH=.
else
   COMPPATH=..
fi
AC_SUBST(COMPPATH)

# Find CPP now so that any conditional tests below won't do it and
# thereby make the resulting definitions conditional.
AC_PROG_CPP

AC_PROG_CXX
AC_PROG_MAKE_SET
AC_PROG_LN_S

if test -n "$with_cross_host"; then
   # We are being configured with a cross compiler.  AC_REPLACE_FUNCS
   # may not work correctly, because the compiler may not be able to
   # link executables.

   AC_DEFINE(HAVE_MALLOC)
   AC_DEFINE(HAVE_MMAP)
   AC_DEFINE(HAVE_GETTIMEOFDAY)
   AC_DEFINE(HAVE_MEMSET)
   AC_DEFINE(HAVE_MUNMAP)
else
   AC_FUNC_MALLOC
   AC_FUNC_MMAP
   AC_CHECK_FUNCS([gettimeofday memset munmap])
fi

AC_TYPE_SIGNAL

AC_SUBST(target_all)

AC_HEADER_STDC
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h sys/time.h unistd.h])

AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_HEADER_TIME
AC_STRUCT_TM
AC_C_VOLATILE

if test -n "$with_cross_host" &&
   test x"$with_cross_host" != x"no"; then
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

AM_CONDITIONAL(TARGET_LIBRARY, test -n "$with_target_subdir")

if test "${multilib}" = "yes"; then
  multilib_arg="--enable-multilib"
else
  multilib_arg=
fi

AC_OUTPUT([Makefile],
[if test -n "$CONFIG_FILES"; then
  LD="${ORIGINAL_LD_FOR_MULTILIBS}"
  ac_file=Makefile . ${libjRateCore_basedir}/../config-ml.in
fi
],
srcdir=${srcdir}
host=${host}
target=${target}
with_multisubdir=${with_multisubdir}
ac_configure_args="${multilib_arg} ${ac_configure_args}"
CONFIG_SHELL=${CONFIG_SHELL-/bin/sh}
libjRateCore_basedir=${libjRateCore_basedir}
CC="${CC}"
CXX="${CXX}"
ORIGINAL_LD_FOR_MULTILIBS="${ORIGINAL_LD_FOR_MULTILIBS}"
)
