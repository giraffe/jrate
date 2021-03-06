/* jRate-config.h.  Generated by configure.  */
/* jRate-config.h.in.  Generated from configure.ac by autoheader.  */

/* Generated from configure.ac Revision: 685  */

#ifndef __JRATE_AUTOCONF_CONFIG_H
#define __JRATE_AUTOCONF_CONFIG_H

/* Processor clock frequency (in MHz) */
#define CLOCK_FREQUENCY 3000.000

/* Define to 1 if you have the `clock_getres' function. */
#define HAVE_CLOCK_GETRES 1

/* Define to 1 if you have the `clock_get_attributes' function. */
/* #undef HAVE_CLOCK_GET_ATTRIBUTES */

/* Define to 1 if you have the `clock_get_time' function. */
/* #undef HAVE_CLOCK_GET_TIME */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `munmap' function. */
#define HAVE_MUNMAP 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if you have the `sched_setscheduler' function. */
#define HAVE_SCHED_SETSCHEDULER 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 to enable debugging. */
/* #undef JRATE_DEBUG */

/* Define to 1 for SMP support */
#define JRATE_HAS_SMP 1

/* Default size of heap memory (in megabytes) */
#define JRATE_HEAP_MEMORY_SIZE 32

/* Default size of immortal memory (in megabytes) */
#define JRATE_IMMORTAL_MEMORY_SIZE 64

/* Default size of method area memory (in megabytes) */
#define JRATE_METHOD_AREA_MEMORY_SIZE 32

/* Number of processors on target machine */
#define JRATE_NCPU 2

/* Page size (in bytes) */
#define JRATE_PAGE_SIZE 4096

/* Default size of scopes arena (in megabytes) */
#define JRATE_SCOPES_ARENA_SIZE 64

/* Define to 1 if jRate should use a real-time scheduler */
#define JRATE_SHOULD_USE_RT_SCHEDULER 1

/* Maximum number of threads on target machine (or -1 for unlimited) */
#define JRATE_THREADMAX 31973

/* Name of package; guarded so it doesn't override libjava */
#ifndef PACKAGE
#define PACKAGE "jrate"
#endif /* PACKAGE */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "jrate-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#ifndef PACKAGE_NAME
#define PACKAGE_NAME "jRate"
#endif /* PACKAGE_NAME */

/* Define to the full name and version of this package. */
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "jRate 0.3.7.2-3.3.3"
#endif /* PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
#ifndef PACKAGE_TARNAME
#define PACKAGE_TARNAME "jrate"
#endif /* PACKAGE_TARNAME */

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "0.3.7.2-3.3.3"
#endif /* PACKAGE_VERSION */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Version number of package; guarded so it doesn't override libjava */
#ifndef VERSION
#define VERSION "0.3.7.2-3.3.3"
#endif /* VERSION */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */

#endif /* __JRATE_AUTOCONF_CONFIG_H */
