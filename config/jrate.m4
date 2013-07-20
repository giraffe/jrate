#                                               -*- Autoconf -*-
# This file contains jRate m4 macros for use with the configure.in
# script in the jRate distribution.
#
# Copyright (C) 2005 Morgan Deters
# Unlimited permission to copy, distribute, and modify these macros is
# hereby granted.
#
# -- Morgan Deters <mdeters@morgandeters.com>  Wed Feb  2 02:50:27 CST 2005

# _JRATE_ARG_ENABLE_OR_DISABLE(ROOT, CHECKING-STRING, HELP-STRING,
#     VAR, AM_CONDITIONAL-VAR, CONFIG_H-VAR, CONFIG_H-EXPLANATION,
#     "able"-PREFIX, DEFAULT-VALUE, RESULT-STRING, DEFAULT-RESULT-STRING)
# -----------------------------------------------------------------------
AC_DEFUN([_JRATE_ARG_ENABLE_OR_DISABLE], [{
AC_MSG_CHECKING([$2])
AC_ARG_ENABLE([$1], AS_HELP_STRING([--$8able-$1],[$3]),
[case $enableval in
  yes) jrate_$4=yes ;;
  no)  jrate_$4=no ;;
  *)   AC_MSG_ERROR([illegal argument '${enableval}' to --$8able-$1]) ;;
esac
jrate_is_default=
jrate_$4_default=no
],[jrate_is_default=yes
jrate_$4_default=yes
jrate_$4=$9])
ifelse([$5],[],[],[{ AM_CONDITIONAL([$5], [test x$jrate_$4 = xyes]) }])
ifelse([$6],[],[],[{
  if test x$jrate_$4 = xyes; then
    AC_DEFINE([$6], [1], [Define to 1 ]m4_default([$7],[to support this feature]))
  fi; }])
jrate_resultval=$jrate_$4
if test "x$jrate_is_default" = x; then
  AC_MSG_RESULT(m4_default([$10],[$jrate_resultval]))
else
  AC_MSG_RESULT(m4_default([$11],m4_default([$10],[$jrate_resultval])))
fi
}[]dnl
])# _JRATE_ARG_ENABLE_OR_DISABLE

# JRATE_ARG_ENABLE(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE = no], [RESULT_STRING], [DEFAULT-RESULT-STRING])
# -------------------------------------------------------------------------
# Provides for an --enable-feature selection for feature ROOT with checking
# string CHECKING-STRING and help string HELP-STRING.  Sets variable
# $jrate_VAR to "yes", to "no", or gives an error if another value is given
# to --enable-ROOT.  If AM_CONDITIONAL-VAR is nonempty, it is the name of
# an AM_CONDITIONAL defined if the feature is enabled.  If CONFIG_H-VAR is
# nonempty, it is the name of an AC_DEFINE var that is left undefined if
# the feature is not enabled or set to 1 if the feature is enabled.  The
# AC_DEFINE comment will read "Define to 1 CONFIG_H-EXPLANATION", or, if
# CONFIG_H-EXPLANATION is empty, it will read "Define to 1 to support this
# feature."  Finally, the DEFAULT-VALUE is the default value if no
# --enable-ROOT is provided to configure.
AC_DEFUN([JRATE_ARG_ENABLE],
[_JRATE_ARG_ENABLE_OR_DISABLE([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],en,m4_default([$8],no),[$9],[$10])[]dnl
])# JRATE_ARG_ENABLE

# JRATE_ARG_DISABLE(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE = yes], [RESULT_STRING], [DEFAULT-RESULT-STRING])
# ---------------------------------------------------------------------
# Very similar to JRATE_ARG_ENABLE, except that the feature defaults to
# "yes" if --disable-ROOT isn't provided to configure.
AC_DEFUN([JRATE_ARG_DISABLE],
[_JRATE_ARG_ENABLE_OR_DISABLE([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],dis,m4_default([$8],yes),[$9],[$10])[]dnl
])# JRATE_ARG_DISABLE

# _JRATE_ARG_WITH_OR_WITHOUT(ROOT, CHECKING-STRING, HELP-STRING,
#     VAR, AM_CONDITIONAL-VAR, CONFIG_H-VAR, CONFIG_H-EXPLANATION,
#     DEFAULT-VALUE, DEFAULT-VALUE-RESULT, "with"-SUFFIX,
#     ACCEPT-REGEXP, REJECT-REGEXP, LEGAL-VALUE-DESCRIPTION,
#     WHETHER-TO-DBLQUOTE-CONFIG_H-ENTRY, ARG-IS-OPTIONAL,
#     ARG-OVERRIDE, RESULT-STRING)
# ----------------------------------------------------------------
AC_DEFUN([_JRATE_ARG_WITH_OR_WITHOUT],[{
AC_MSG_CHECKING([$2])
AC_ARG_WITH([$1], AS_HELP_STRING([--with$10-$1],[$3]),
[ifelse([$15],[],[{dnl argument required
  if test "x${withval}" = x; then
    AC_MSG_ERROR([--with$10-$1 requires an argument])
  fi; }])
ifelse([$11],[],[],[{dnl set of legal regexps
  if echo $withval | grep '^$11$' >/dev/null 2>&1; then :; else
    AC_MSG_ERROR([argument to --with$10-$1 is not m4_default([$13],[in the legal set of arguments])])
  fi; }])
ifelse([$12],[],[],[{dnl set of illegal regexps
  if echo $withval | grep '^$12$' >/dev/null 2>&1; then
    AC_MSG_ERROR([argument to --with$10-$1 is not m4_default([$13],[in the legal set of arguments])])
  fi; }])
  jrate_$4=m4_default([$16],[$withval])
  jrate_resultval=$jrate_$4
  ifelse([$5],[],[],[{ AM_CONDITIONAL([$5], true) }])],
[ jrate_$4=$8
  jrate_resultval=$9
  ifelse([$5],[],[],[{ AM_CONDITIONAL([$5], false) }])])
ifelse([$6],[],[],[{
  AC_DEFINE_UNQUOTED([$6],ifelse([$14],yes,["$jrate_$4"],[$jrate_$4]),m4_default([$7],[The argument to --with$10-$1]))
}])
AC_MSG_RESULT(m4_default([$17],[$jrate_resultval]));}[]dnl
])# _JRATE_ARG_WITH_OR_WITHOUT

# JRATE_ARG_WITH_STRING(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE], [DEFAULT-VALUE-RESULT],
#     [ACCEPT-REGEXP], [REJECT-REGEXP], [LEGAL-VALUE-DESCRIPTION],
#     [RESULT-STRING])
# ------------------------------------------------------------------------
# Provides for a --with-package selection for package ROOT with checking
# string CHECKING-STRING and help string HELP-STRING.  Sets variable
# $jrate_VAR to the --with-ROOT argument (an argument is required).
# If AM_CONDITIONAL-VAR is nonempty, it is the name of an AM_CONDITIONAL
# defined to TRUE if --with-ROOT is given, or FALSE if it is not.  If
# CONFIG_H-VAR is nonempty, it is the name of an AC_DEFINE var that is
# defined to be the argument, or to the DEFAULT-VALUE if --with-ROOT is
# not specified (NOTE that for JRATE_ARG_WITH_STRING, this value is
# "QUOTED" in the config.h file).  The AC_DEFINE comment will be the text
# of CONFIG_H-EXPLANATION, or, if CONFIG_H-EXPLANATION is empty, it will
# read "The argument to --with-ROOT."  Finally, the DEFAULT-VALUE is the
# default value if no --with-ROOT is provided to configure, and
# DEFAULT-VALUE-RESULT is shown on the "checking..." line if DEFAULT-VALUE
# is used (or DEFAULT-VALUE is shown on the checking line if
# DEFAULT-VALUE-RESULT is empty but DEFAULT-VALUE is nonempty; or "none"
# is shown if they're both empty).
AC_DEFUN([JRATE_ARG_WITH_STRING],
[_JRATE_ARG_WITH_OR_WITHOUT([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],[$8],m4_default(m4_default([$9],[$8]),none),[],[$10],[$11],[$12],yes,[],[],[$13])[]dnl
])# JRATE_ARG_WITH_STRING

# JRATE_ARG_WITH_INTEGER(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE], [DEFAULT-VALUE-RESULT],
#     [RESULT-STRING])
# ------------------------------------------------------------------------
# Very similar to JRATE_ARG_WITH_STRING, but the config.h value is NOT
# quoted and an error is given if the required argument is not an integer.
AC_DEFUN([JRATE_ARG_WITH_INTEGER],
[_JRATE_ARG_WITH_OR_WITHOUT([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],[$8],m4_default(m4_default([$9],[$8]),none),[],[[[0-9][0-9]*]],[],[an integer],no,[],[],[$10])[]dnl
])# JRATE_ARG_WITH_INTEGER

# JRATE_ARG_WITH_NUMBER(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE], [DEFAULT-VALUE-RESULT]
#     [RESULT-STRING])
# -----------------------------------------------------------------
# Very similar to JRATE_ARG_WITH_INTEGER, but the required argument
# doesn't have to be an integer, just a (decimal) number.
AC_DEFUN([JRATE_ARG_WITH_NUMBER],
[_JRATE_ARG_WITH_OR_WITHOUT([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],[$8],m4_default(m4_default([$9],[$8]),none),[],[[[0-9.][0-9.]*]],[],[a number],no,[],[],[$10])[]dnl
])# JRATE_ARG_WITH_NUMBER

# JRATE_ARG_WITH(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE = no], [DEFAULT-VALUE-RESULT],
#     [RESULT-STRING])
# -------------------------------------------------------------------
# Similar to JRATE_ARG_WITH_STRING, but arguments are not permitted.
# The variable $jrate_VAR will contain "yes" or "no" afterwards, like
# JRATE_ARG_ENABLE, and the default is "no".
AC_DEFUN([JRATE_ARG_WITH],
[_JRATE_ARG_WITH_OR_WITHOUT([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],m4_default([$8],no),m4_default(m4_default([$9],[$8]),no),[],[],[.],[permitted],no,arg_optional,[`if test "x${withval}" = xno then echo no; else echo yes; fi`],[$10])[]dnl
])# JRATE_ARG_WITH

# JRATE_ARG_WITHOUT(ROOT, CHECKING-STRING, HELP-STRING,
#     [VAR = ROOT (with '-' turned into '_')],
#     [AM_CONDITIONAL-VAR],
#     [CONFIG_H-VAR], [CONFIG_H-EXPLANATION],
#     [DEFAULT-VALUE = yes], [DEFAULT-VALUE-RESULT]
#     [RESULT-STRING])
# ----------------------------------------------------------------------
# Very similar to JRATE_ARG_WITH, but the default is "yes".  Also,
# the single argument "--with-ROOT=no" is permitted, which is synonymous
# to "--without-ROOT".
AC_DEFUN([JRATE_ARG_WITHOUT],
[_JRATE_ARG_WITH_OR_WITHOUT([$1],[$2],[$3],m4_default([$4],m4_translit([$1],[-],[_])),[$5],[$6],[$7],m4_default([$8],yes),m4_default(m4_default([$9],[$8]),yes),out,[no],[],[permitted],no,arg_optional,[`if test "x${withval}" = xno then echo no; else echo yes; fi`],[$10])[]dnl
])# JRATE_ARG_WITHOUT

# JRATE_ARG_MEMORY_AREA(TYPE, DESCRIPTION, DEFAULT-SIZE, [DEFINE-NAME])
# ----------------------------------------------------------------------
# Provide for a --with-memory-area-size configure option for memory area
# type TYPE with short description DESCRIPTION and default size of
# DEFAULT-SIZE megabytes.  The name given by DEFINE-NAME will be
# AC_DEFINE'd (prefixed by "JRATE_") or, if DEFINE-NAME isn't specified,
# then JRATE_{DESCRIPTION}_SIZE will be used, where {DESCRIPTION} is an
# uppercase version of DESCRIPTION with '-' and ' ' turned into '_'.
AC_DEFUN([JRATE_ARG_MEMORY_AREA],
[JRATE_ARG_WITH_INTEGER([$1-size], [for default $2 size],
                        [Default $2 size in MB (default $3)],
                        [], [],
                        [JRATE_]m4_default([$4],patsubst(m4_translit($2,[a-z -],[A-Z__]),[^A-Z_]))[_SIZE],
                        [Default size of $2 (in megabytes)],
                        [$3], [],
                        [${jrate_resultval} MB])[]dnl
])# JRATE_ARG_MEMORY_AREA

# JRATE_NO_CROSS_COMPILING_ALLOWED
# --------------------------------
AC_DEFUN([JRATE_NO_CROSS_COMPILING_ALLOWED],
[if test "x$host" != "x$build" || test "x$cross_compiling" = xyes; then
  AC_MSG_ERROR([jRate cannot be cross compiled.
For now, the build and host systems must be the same.  That is, you may
build jRate as a cross compiler, but you may not yet *use* a cross compiler
to build jRate itself.  This is because jRate must use the patched GCC that
it builds to build jRate runtime libraries.  This deficiency may be fixed
in the future, at the cost of longer compilation times (the modified GCC
would need to be bootstrapped twice).])
fi[]dnl
])# JRATE_NO_CROSS_COMPILING_ALLOWED

# JRATE_REQUIRE_SOURCE_AND_BUILD_DIRECTORIES_DIFFERENT
# ----------------------------------------------------
AC_DEFUN([JRATE_REQUIRE_SOURCE_AND_BUILD_DIRECTORIES_DIFFERENT],
[if test `cd "$srcdir"; pwd` = `pwd`; then
  AC_MSG_ERROR([Source and build directories must be different.
At present, you cannot build jRate from the top level of its own source
tree.  Please create a build directory and run this configure script from
there.])
fi[]dnl
])# JRATE_REQUIRE_SOURCE_AND_BUILD_DIRECTORIES_DIFFERENT

# _JRATE_REQUIRE_TOOL(VAR, TOOL, ERROR-MSG)
# -----------------------------------------
AC_DEFUN([_JRATE_REQUIRE_TOOL],
[AC_CHECK_TOOL([$1], [$2], [oops])
if test "x${$1}" = xoops; then
  AC_MSG_ERROR([$3])
fi[]dnl
])# _JRATE_REQUIRE_TOOL

# JRATE_REQUIRE_TOOL(TOOL, [ERROR-MSG])
# -------------------------------------
AC_DEFUN([JRATE_REQUIRE_TOOL],
[_JRATE_REQUIRE_TOOL(m4_translit([$1],[a-z],[A-Z]),[$1],[m4_default([$2],[sorry, currently $1 is required to build jRate.])])[]dnl
])# JRATE_REQUIRE_TOOL

# _JRATE_DETECTION_ON_CYGWIN
# --------------------------
AC_DEFUN([_JRATE_DETECTION_ON_CYGWIN],[{
case $build_os in
  cygwin*) AC_MSG_ERROR([Can't run detection on cygwin.
I can't detect anything about the system on cygwin.
You'll need to specify explicit --with-target values.
See ./configure --help for a list.])
esac;}[]dnl
])# _JRATE_DETECTION_ON_CYGWIN

# JRATE_DETECT_CPU
# ----------------
AC_DEFUN([JRATE_DETECT_NCPU],[{
AC_MSG_CHECKING([target number of CPUs])
jrate_ncpu_how=detected
AC_ARG_WITH(target-ncpus,
AS_HELP_STRING([--with-target-ncpus=N],[Configure for target with N CPUs]),
[if test "x{$withval}" = x; then
  AC_MSG_ERROR([you must specify a count of CPUs in the target system for --with-target-ncpus])
fi
jrate_ncpu_how='specified by user'
jrate_cv_ncpu=$withval],
[_JRATE_DETECTION_ON_CYGWIN
AC_CACHE_VAL([jrate_cv_ncpu],
[case $build_os in
    linux*)  jrate_cv_ncpu=`grep '^processor[[	 ]]*:' /proc/cpuinfo | wc -l | "$AWK" '{print $[1]}'`
             if test "x$jrate_cv_ncpu" = x0; then
               if grep '^cpus detected[[	 ]]*:' /proc/cpuinfo >/dev/null 2>&1; then
                 jrate_cv_ncpu=`grep '^cpus detected[[	 ]]*:' /proc/cpuinfo | sed 's,.*: *\([[^ ]]*\) *,\1,'`
               else
                 AC_MSG_ERROR([cannot detect number of CPUs])
               fi
             fi ;;
    darwin*|netbsd*|openbsd*|freebsd*)
             if jrate_cv_ncpu=`"$SYSCTL" -n hw.ncpu 2>/dev/null`; then :; else
               AC_MSG_ERROR([couldn't get hw.ncpu from $SYSCTL])
             fi ;;
    solaris*)
             jrate_cv_ncpu=`"$PSRINFO" 2>/dev/null | wc -l | "$AWK" '{print $[1]}'`
             if test "x$jrate_cv_ncpu" = x; then
               AC_MSG_ERROR([error getting output from $PSRINFO])
             fi ;;
    *)       AC_MSG_ERROR([unknown build OS '${build_os}']) ;;
esac])])
AC_DEFINE_UNQUOTED([JRATE_NCPU], [$jrate_cv_ncpu], [Number of processors on target machine])
AC_MSG_RESULT([$jrate_cv_ncpu ($jrate_ncpu_how)]);}[]dnl
])# JRATE_DETECT_CPU

# JRATE_DETECT_CPU_MHZ
# --------------------
AC_DEFUN([JRATE_DETECT_CPU_MHZ],[{
AC_MSG_CHECKING([target CPU clock frequency])
jrate_mhz_how=detected
AC_ARG_WITH(target-cpufreq,
AS_HELP_STRING([--with-target-cpufreq=MHz],[Configure for target with a given CPU clock frequency]),
[if test "x{$withval}" = x; then
  AC_MSG_ERROR([you must specify a clock frequency for target CPUs for --with-target-cpufreq])
fi
jrate_mhz_how='specified by user'
jrate_cv_mhz=$withval],
[_JRATE_DETECTION_ON_CYGWIN
AC_CACHE_VAL([jrate_cv_mhz],
[case $build_os in
        linux*)  jrate_cv_mhz=
             for tag in 'cpu MHz' clock; do
               if grep '^'"$tag"'[[	 ]]*:' /proc/cpuinfo >/dev/null 2>&1; then
                 jrate_cv_mhz=`grep '^'"$tag"'[[	 ]]*:' /proc/cpuinfo | head -1 2>/dev/null | sed 's,.*: *\([[^ ]]*\) *,\1,'`
                 break
               fi
             done
             if test "x${jrate_cv_mhz}" = x; then
               for tag in 'cycle frequency [\[Hz\]]'; do
                 if grep '^'"$tag"'[[	 ]]*:' /proc/cpuinfo >/dev/null 2>&1; then
                   jrate_hz=`grep '^'"$tag"'[[	 ]]*:' /proc/cpuinfo | head -1 2>/dev/null | sed 's,.*: *\([[^ ]]*\) *,\1,'`
                   jrate_cv_mhz="(($jrate_hz)/1000000.0)"
                   break
                 fi
               done
               if test "x${jrate_cv_mhz}" = x; then
                 AC_MSG_ERROR([couldn't detect CPU MHz])
               fi
             fi ;;
    darwin*|netbsd*|openbsd*|freebsd*)
             dnl On openbsd and netbsd, sysctl doesn't return an error code
             dnl on unknown keys.  :-(
             jrate_hz=`"$SYSCTL" -n hw.cpufrequency 2>/dev/null`
             if test "x$jrate_hz" != x; then
               jrate_cv_mhz="(($jrate_hz)/1000000.0)"
             else
               jrate_cv_mhz=`grep '^CPU:.*([[0-9.][0-9.]]*-MHz' /var/run/boot.log 2>/dev/null | head -1 2>/dev/null | sed 's,^.*(\([[0-9.][0-9.]]*\)-MHz.*,\1,'`
               if test "x$jrate_cv_mhz" = x; then
                 jrate_cv_mhz=`grep '^cpu.* [[0-9.][0-9.]]* MHz' /var/run/boot.log 2>/dev/null | head -1 2>/dev/null | sed 's,^.* \([[0-9.][0-9.]]*\) MHz.*,\1,'`
                 if test "x$jrate_cv_mhz" = x; then
                   jrate_cv_mhz=`grep '^CPU:.*([[0-9.][0-9.]]*-MHz' /var/run/dmesg.boot 2>/dev/null | head -1 2>/dev/null | sed 's,^.*(\([[0-9.][0-9.]]*\)-MHz.*,\1,'`
                   if test "x$jrate_cv_mhz" = x; then
                     jrate_cv_mhz=`grep '^cpu.* [[0-9.][0-9.]]* MHz' /var/run/dmesg.boot 2>/dev/null | head -1 2>/dev/null | sed 's,^.* \([[0-9.][0-9.]]*\) MHz.*,\1,'`
                     if test "x$jrate_cv_mhz" = x; then
                       jrate_cv_mhz=`"$DMESG" 2>/dev/null | grep '^CPU:.*([[0-9.][0-9.]]*-MHz' | head -1 2>/dev/null | sed 's,^.*(\([[0-9.][0-9.]]*\)-MHz.*,\1,'`
                       if test "x$jrate_cv_mhz" = x; then
                         jrate_cv_mhz=`"$DMESG" 2>/dev/null | grep '^cpu.* [[0-9.][0-9.]]* MHz' | head -1 2>/dev/null | sed 's,^.* \([[0-9.][0-9.]]*\) MHz.*,\1,'`
                         if test "x$jrate_cv_mhz" = x; then
                           AC_MSG_ERROR([couldn't get hw.cpufrequency from $SYSCTL and couldn't find CPU frequency from /var/run/boot.log, /var/run/dmesg.boot, or dmesg])
                         fi
                       fi
                     fi
                   fi
                 fi
               fi
             fi ;;
    solaris*)
             if jrate_cv_mhz=`"$PSRINFO" -v | grep ' processor operates at [[0-9.][0-9.]]* MHz' 2>/dev/null | head -1 | sed 's,^.* processor operates at \([[0-9.][0-9.]]*\) MHz.*,\1,'` && test "x$jrate_cv_mhz" != x; then :; else
               AC_MSG_ERROR([couldn't get CPU frequency from $PSRINFO])
             fi ;;
    *)       AC_MSG_ERROR([unknown build OS '${build_os}']) ;;
esac])])
AC_DEFINE_UNQUOTED([CLOCK_FREQUENCY], [$jrate_cv_mhz], [Processor clock frequency (in MHz)])
AC_MSG_RESULT([$jrate_cv_mhz ($jrate_mhz_how)]);}[]dnl
])# JRATE_DETECT_CPU_MHZ

# JRATE_DETECT_PAGESIZE
# ---------------------
AC_DEFUN([JRATE_DETECT_PAGESIZE],[{
AC_MSG_CHECKING([target pagesize])
jrate_pagesize_how=detected
AC_ARG_WITH(target-pagesize,
AS_HELP_STRING([--with-target-pagesize=N],[Configure for target with pagesize N]),
[if test "x{$withval}" = x; then
  AC_MSG_ERROR([you must specify a target system pagesize (in bytes) for --with-target-pagesize])
fi
jrate_pagesize_how='specified by user'
jrate_cv_pagesize=$withval],
[_JRATE_DETECTION_ON_CYGWIN
AC_CACHE_VAL([jrate_cv_pagesize],
[jrate_cv_pagesize=`AC_TRY_RUN([
#include <stdio.h>
#include <stdlib.h>
#if HAVE_UNISTD_H
# include <unistd.h>
#endif
int main() { printf("%ld\n",(long)getpagesize()); return 0; }])`
if test "x${jrate_cv_pagesize}" = x; then
  case $build_os in
    linux*)  if grep '^page size [\[bytes\][	 ]]*:' /proc/cpuinfo >/dev/null 2>&1; then
               jrate_cv_pagesize=`grep '^page size [\[bytes\][	 ]]*:' /proc/cpuinfo | sed 's,.*: *\([[^ ]]*\) *,\1,'`
             elif grep '^TLB size[[	 ]: *[0-9][0-9]* *[0-9][0-9]]*K pages$' /proc/cpuinfo >/dev/null 2>&1; then
               jrate_cv_pagesize_k=`grep '^TLB size[[	 ]: *[0-9][0-9]* *[0-9][0-9]]*K pages$' /proc/cpuinfo | sed 's,.*: *[[0-9][0-9]* *\([0-9][0-9]*]\)K pages$,\1,'`
               jrate_cv_pagesize=`expr 1024 '*' '$jrate_cv_pagesize_k'`
             fi ;;
    darwin*|netbsd*|openbsd*|freebsd*)
             if jrate_cv_pagesize=`"$SYSCTL" -n hw.pagesize 2>/dev/null`; then :; else
               if jrate_cv_pagesize=`"$SYSCTL" -n vm.stats.vm.v_page_size 2>/dev/null`; then :; else
                 AC_MSG_ERROR([couldn't get hw.pagesize or vm.stats.vm.v_page_size from $SYSCTL])
               fi
             fi ;;
    solaris*)
             if jrate_cv_pagesize=`"$GETCONF" PAGESIZE 2>/dev/null`; then :;
             elif jrate_cv_pagesize=`"$GETCONF" PAGE_SIZE 2>/dev/null`; then :; else
               AC_MSG_ERROR([couldn't get PAGESIZE or PAGE_SIZE from $GETCONF])
             fi ;;
    *)       AC_MSG_ERROR([unknown build OS '${build_os}']) ;;
  esac
  if test "x${jrate_cv_pagesize}" = x; then
    AC_MSG_ERROR([cannot determine page size])
  fi
fi])])
AC_DEFINE_UNQUOTED([JRATE_PAGE_SIZE], [$jrate_cv_pagesize], [Page size (in bytes)])
AC_MSG_RESULT([$jrate_cv_pagesize ($jrate_pagesize_how)]);}[]dnl
])# JRATE_DETECT_PAGESIZE

# JRATE_DETECT_THREADMAX
# ----------------------
AC_DEFUN([JRATE_DETECT_THREADMAX],[{
AC_MSG_CHECKING([target's maximum number of threads])
jrate_threadmax_how=detected
AC_ARG_WITH(target-threadmax,
AS_HELP_STRING([--with-target-threadmax=N],[Configure for target with max N number of threads]),
[if test "x{$withval}" = x; then
  AC_MSG_ERROR([you must specify your target system's max number of threads (or "unlimited") for --with-target-threadmax])
fi
jrate_threadmax_how='specified by user'
jrate_cv_threadmax=$withval],
[_JRATE_DETECTION_ON_CYGWIN
AC_CACHE_VAL([jrate_cv_threadmax],
[case $build_os in
    linux*)  if jrate_cv_threadmax=`"${SYSCTL}" -n kernel.threads-max 2>/dev/null`; then :; else
               AC_MSG_ERROR([couldn't get kernel.threads-max from $SYSCTL])
             fi ;;
    darwin*|netbsd*|openbsd*|freebsd*)
             # don't know how to find this out
             jrate_cv_threadmax=unknown ;;
    solaris*)
             if jrate_cv_threadmax=`"${GETCONF}" PTHREAD_THREADS_MAX 2>/dev/null` && test "x$jrate_cv_threadmax" != x && test "x$jrate_cv_threadmax" != xundefined; then :; else
               jrate_cv_threadmax=unknown
             fi ;;
    *)       jrate_cv_threadmax=unknown ;;
esac])])
jrate_cv_threadmax_define=$jrate_cv_threadmax
if test "x${jrate_cv_threadmax_define}" = xunlimited || test "x${jrate_cv_threadmax_define}" = x || test "x${jrate_cv_threadmax_define}" = x0; then
  jrate_cv_threadmax_define=-1
  jrate_cv_threadmax=unlimited
elif test "x${jrate_cv_threadmax_define}" = xunknown && test "x${jrate_threadmax_how}" = xdetected; then
  jrate_cv_threadmax_define=-1
  jrate_threadmax_how='assuming unlimited'
fi
AC_DEFINE_UNQUOTED([JRATE_THREADMAX], [$jrate_cv_threadmax_define], [Maximum number of threads on target machine (or -1 for unlimited)])
AC_MSG_RESULT([$jrate_cv_threadmax ($jrate_threadmax_how)]);}[]dnl
])# JRATE_DETECT_THREADMAX

# JRATE_ESYSCMD(COMMAND)
# ------------------------------------------------------
# Same as m4_esyscmd(COMMAND) but swallows all newlines.
# Good for collecting data from one-line output.
AC_DEFUN([JRATE_ESYSCMD],
[m4_translit(m4_esyscmd([$1]),[
])[]dnl
])# JRATE_ESYSCMD

# JRATE_MSG_PENDING_RESULT(MESSAGE)
# ---------------------------------
m4_define([JRATE_MSG_PENDING_RESULT],
[_AS_ECHO([$as_me:$LINENO: $1], AS_MESSAGE_LOG_FD)
_AS_ECHO_N([$1... ])[]dnl
])

# JRATE_REQUIRE_FUNCTION(FUNCTION, SEARCH-LIBS, [ERROR])
# --------------------------------------------------------------------
# Search SEARCH-LIBS for function FUNCTION.  If not found, an error is
# emitted (ERROR, if specified, otherwise a generic error).  If found,
# HAVE_X is AC_DEFINE'd where X is an uppercase translit of FUNCTION.
AC_DEFUN([JRATE_REQUIRE_FUNCTION],[{
AC_SEARCH_LIBS([$1],[$2],
  AC_DEFINE([HAVE_]m4_translit([$1],[a-z],[A-Z]), [1],
    [Define to 1 if you have the `$1' function.]),
  AC_MSG_ERROR(m4_default([$3],[can't find $1()])))
}[]dnl
])# JRATE_REQUIRE_FUNCTION

# JRATE_SEARCH_FUNCTION(FUNCTION, SEARCH-LIBS, [WARNING], [ON-FAILURE])
# -------------------------------------------------------------------------
# Search SEARCH-LIBS for function FUNCTION.  If not found, a warning is
# emitted if WARNING is specified, and the code ON-FAILURE is run;
# otherwise, failure is silent.  If found, HAVE_X is AC_DEFINE'd where X is
# an uppercase translit of FUNCTION.
AC_DEFUN([JRATE_SEARCH_FUNCTION],[{
AC_SEARCH_LIBS([$1],[$2],
  AC_DEFINE([HAVE_]m4_translit([$1],[a-z],[A-Z]), [1],
    [Define to 1 if you have the `$1' function.]),[
  ifelse([$3],,,AC_MSG_WARN([$3]))
  ifelse([$4],,:,[{
  $4
  }])
])
}[]dnl
])# JRATE_SEARCH_FUNCTION

# JRATE_HAVE_FUNCTION(FUNCTION, [WARNING], [ON-FAILURE])
# --------------------------------------------------------------------------
# Try to link a program using function FUNCTION.  If not found, a warning is
# emitted if WARNING is specified, and the code ON-FAILURE is run;
# otherwise, failure is silent.  If found, HAVE_X is AC_DEFINE'd where X is
# an uppercase translit of FUNCTION.
AC_DEFUN([JRATE_HAVE_FUNCTION],[{
AC_CACHE_CHECK([for presence of function $1],[jrate_cv_have_$1],
[AC_TRY_LINK_FUNC([$1],
  [jrate_cv_have_$1=yes]
  [jrate_cv_have_$1=no])])
if test "x$jrate_cv_have_$1" = xyes; then
  AC_DEFINE([HAVE_]m4_translit([$1],[a-z],[A-Z]), [1],
      [Define to 1 if you have the `$1' function.])
else
  ifelse([$2],,,AC_MSG_WARN([$2]))
  ifelse([$3],,:,[{
  $3
  }])
fi
}[]dnl
])# JRATE_HAVE_FUNCTION

# _JRATE_PATH_PROG_FOR_DETECTION(PROGRAM,
#     PROGRAM-VAR,
#     [BUILD-OS-GLOB-OF-SYSTEMS-IT-IS-REQUIRED-ON],
#     [DESCRIPTION-OF-SYSTEMS-IT-IS-REQUIRED-ON])
# -------------------------------------------------
AC_DEFUN([_JRATE_PATH_PROG_FOR_DETECTION],[{
AC_PATH_PROG([$2], [$1], [], [/sbin /usr/sbin /bin /usr/bin])
ifelse([$3],,,[{
  if test "x$$2" = x; then
    case $build_os in
      [$3]) AC_MSG_ERROR([sysctl not found.
On ]ifelse([$4],,[your system],[$4 systems])[, I may require [$1] to do autodetection.
You may need to specify some values manually with --with-target-*, or
point me to [$1] by setting the [$2] environment variable.]) ;;
    esac
  fi;}])
}[]dnl
])# _JRATE_PATH_PROG_FOR_DETECTION

# JRATE_PATH_PROG_FOR_DETECTION(PROGRAM,
#     [BUILD-OS-GLOB-OF-SYSTEMS-IT-IS-REQUIRED-ON],
#     [DESCRIPTION-OF-SYSTEMS-IT-IS-REQUIRED-ON])
# ------------------------------------------------------------------
# Finds program PROGRAM in standard paths or from an all-uppercase
# environment variable.  Will give special warning for systems whose
# $build_os matches BUILD-OS-GLOB-OF-SYSTEMS-IT-IS-REQUIRED-ON, and
# in the warning refers to these systems as
# DESCRIPTION-OF-SYSTEMS-IT-IS-REQUIRED-ON.
AC_DEFUN([JRATE_PATH_PROG_FOR_DETECTION],
[_JRATE_PATH_PROG_FOR_DETECTION([$1],m4_translit([$1],[a-z-],[A-Z_]),[$2],[$3])[]dnl
])# JRATE_PATH_PROG_FOR_DETECTION

# JRATE_DEFAULT(VAR, VALUE, DEFAULT)
# ----------------------------------------------------------------------------
# Deposit VALUE in VAR if VALUE is non-null; deposit DEFAULT in VAR otherwise.
AC_DEFUN([JRATE_DEFAULT],[{
if test "x$2" = x; then
  $1="[$3]"
else
  $1="[$2]"
fi
}[]dnl
])# JRATE_DEFAULT

# JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC(TYPE)
# --------------------------------------------------------------------------
# Find correct --build, --host, or --target option to pass GCC's configure
# based on $build, $build_alias, etc.  Also print checking...result messages
# and AC_SUBST the resulting gcc_config_TYPE. TYPE should be one of "build",
# "host", or "target".
AC_DEFUN([JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC],[{
AC_MSG_CHECKING([for --]$1[ to pass to gcc's configure])
JRATE_DEFAULT([gcc_config_$1],[$$1_alias],[$$1])
AC_SUBST([gcc_config_$1])
AC_MSG_RESULT([$gcc_config_$1])
}[]dnl
])# JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC

# JRATE_CHECK_FOR_GCC_CONFIGURE_TRIPLE
# -------------------------------------------------------------------
# Find correct --build, --host, and --target options to pass along to
# GCC's configure.
AC_DEFUN([JRATE_CHECK_FOR_GCC_CONFIGURE_TRIPLE],[{
JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC([build])
JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC([host])
JRATE_CHECK_FOR_GCC_CONFIGURE_SPEC([target])
}[]dnl
])# JRATE_CHECK_FOR_GCC_CONFIGURE_TRIPLE
