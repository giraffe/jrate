srcdir = /home/yanxin/git/jrate/gcc/gcc
VPATH = /home/yanxin/git/jrate/gcc/gcc
EQ = =

force:

libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
libgcc/./_exit.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_exit -c $(srcdir)/libgcc2.c -o libgcc/./_exit.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
libgcc/./_bb.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_bb -c $(srcdir)/libgcc2.c -o libgcc/./_bb.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_divdi3.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_moddi3.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivdi3.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_umoddi3.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udiv_w_sdiv.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivmoddi4.o
libgcc/./unwind-dw2.o: stmp-dirs /home/yanxin/git/jrate/gcc/gcc/unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/yanxin/git/jrate/gcc/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde-glibc.o: stmp-dirs /home/yanxin/git/jrate/gcc/gcc/unwind-dw2-fde-glibc.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/yanxin/git/jrate/gcc/gcc/unwind-dw2-fde-glibc.c -o libgcc/./unwind-dw2-fde-glibc.o
libgcc/./unwind-sjlj.o: stmp-dirs /home/yanxin/git/jrate/gcc/gcc/unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/yanxin/git/jrate/gcc/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
libgcc/./unwind-c.o: stmp-dirs /home/yanxin/git/jrate/gcc/gcc/unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/yanxin/git/jrate/gcc/gcc/unwind-c.c -o libgcc/./unwind-c.o

libgcc/./libgcc.map: /home/yanxin/git/jrate/gcc/gcc/mkmap-symver.awk /home/yanxin/git/jrate/gcc/gcc/libgcc-std.ver /home/yanxin/git/jrate/gcc/gcc/config/libgcc-glibc.ver  libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_exit.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o
	{ $(NM_FOR_TARGET) -pg  libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_exit.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o; echo %%; \
	  cat /home/yanxin/git/jrate/gcc/gcc/libgcc-std.ver /home/yanxin/git/jrate/gcc/gcc/config/libgcc-glibc.ver | sed -e "/^[ 	]*#/d" -e 's/^%\(if\|else\|elif\|endif\|define\)/#/' \
	  | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -E -xassembler-with-cpp -; \
	} | $(AWK) -f /home/yanxin/git/jrate/gcc/gcc/mkmap-symver.awk  > libgcc/./tmp-libgcc.map
	mv libgcc/./tmp-libgcc.map $@

libgcc/./stacknote.s: stmp-dirs
	@( echo | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -S -o - -xc - | grep .note.GNU-stack || : ) > $@.tmp
	@mv -f $@.tmp $@

libgcc/./_muldi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_muldi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_muldi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_muldi3.o -xassembler -
libgcc/./_negdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_negdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negdi2.o -xassembler -
libgcc/./_lshrdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_lshrdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_lshrdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_lshrdi3.o -xassembler -
libgcc/./_ashldi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ashldi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_ashldi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ashldi3.o -xassembler -
libgcc/./_ashrdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ashrdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_ashrdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ashrdi3.o -xassembler -
libgcc/./_ffsdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ffsdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_ffsdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ffsdi2.o -xassembler -
libgcc/./_clz.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clz.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_clz.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clz.o -xassembler -
libgcc/./_cmpdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_cmpdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_cmpdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_cmpdi2.o -xassembler -
libgcc/./_ucmpdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ucmpdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_ucmpdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ucmpdi2.o -xassembler -
libgcc/./_floatdidf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdidf.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_floatdidf.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdidf.o -xassembler -
libgcc/./_floatdisf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdisf.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_floatdisf.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdisf.o -xassembler -
libgcc/./_fixunsdfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsdfsi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunsdfsi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsdfsi.o -xassembler -
libgcc/./_fixunssfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunssfsi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunssfsi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunssfsi.o -xassembler -
libgcc/./_fixunsdfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsdfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunsdfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsdfdi.o -xassembler -
libgcc/./_fixdfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixdfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixdfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixdfdi.o -xassembler -
libgcc/./_fixunssfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunssfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunssfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunssfdi.o -xassembler -
libgcc/./_fixsfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixsfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixsfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixsfdi.o -xassembler -
libgcc/./_fixxfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixxfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixxfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixxfdi.o -xassembler -
libgcc/./_fixunsxfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsxfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunsxfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsxfdi.o -xassembler -
libgcc/./_floatdixf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdixf.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_floatdixf.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdixf.o -xassembler -
libgcc/./_fixunsxfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsxfsi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunsxfsi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsxfsi.o -xassembler -
libgcc/./_fixtfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixtfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixtfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixtfdi.o -xassembler -
libgcc/./_fixunstfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunstfdi.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_fixunstfdi.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunstfdi.o -xassembler -
libgcc/./_floatditf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatditf.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_floatditf.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatditf.o -xassembler -
libgcc/./_clear_cache.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clear_cache.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_clear_cache.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clear_cache.o -xassembler -
libgcc/./_trampoline.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_trampoline.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_trampoline.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_trampoline.o -xassembler -
libgcc/./__main.oS: stmp-dirs libgcc/./stacknote.s libgcc/./__main.o
	@( $(NM_FOR_TARGET) -pg libgcc/./__main.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./__main.o -xassembler -
libgcc/./_exit.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_exit.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_exit.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_exit.o -xassembler -
libgcc/./_absvsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_absvsi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_absvsi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_absvsi2.o -xassembler -
libgcc/./_absvdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_absvdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_absvdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_absvdi2.o -xassembler -
libgcc/./_addvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addvsi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_addvsi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addvsi3.o -xassembler -
libgcc/./_addvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addvdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_addvdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addvdi3.o -xassembler -
libgcc/./_subvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_subvsi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_subvsi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_subvsi3.o -xassembler -
libgcc/./_subvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_subvdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_subvdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_subvdi3.o -xassembler -
libgcc/./_mulvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_mulvsi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_mulvsi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_mulvsi3.o -xassembler -
libgcc/./_mulvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_mulvdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_mulvdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_mulvdi3.o -xassembler -
libgcc/./_negvsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negvsi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_negvsi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negvsi2.o -xassembler -
libgcc/./_negvdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negvdi2.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_negvdi2.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negvdi2.o -xassembler -
libgcc/./_ctors.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ctors.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_ctors.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ctors.o -xassembler -
libgcc/./_divdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_divdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_divdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_divdi3.o -xassembler -
libgcc/./_moddi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_moddi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_moddi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_moddi3.o -xassembler -
libgcc/./_udivdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udivdi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_udivdi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udivdi3.o -xassembler -
libgcc/./_umoddi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_umoddi3.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_umoddi3.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_umoddi3.o -xassembler -
libgcc/./_udiv_w_sdiv.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udiv_w_sdiv.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_udiv_w_sdiv.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udiv_w_sdiv.o -xassembler -
libgcc/./_udivmoddi4.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udivmoddi4.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_udivmoddi4.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udivmoddi4.o -xassembler -
libgcc/./_eprintf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_eprintf.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_eprintf.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_eprintf.o -xassembler -
libgcc/./_bb.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_bb.o
	@( $(NM_FOR_TARGET) -pg libgcc/./_bb.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_bb.o -xassembler -
libgcc/./__gcc_bcmp.oS: stmp-dirs libgcc/./stacknote.s libgcc/./__gcc_bcmp.o
	@( $(NM_FOR_TARGET) -pg libgcc/./__gcc_bcmp.o | $(AWK) 'NF == 3 { print "	.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./__gcc_bcmp.o -xassembler -

./libgcc.a: stmp-dirs  libgcc/./_muldi3.oS libgcc/./_negdi2.oS libgcc/./_lshrdi3.oS libgcc/./_ashldi3.oS libgcc/./_ashrdi3.oS libgcc/./_ffsdi2.oS libgcc/./_clz.oS libgcc/./_cmpdi2.oS libgcc/./_ucmpdi2.oS libgcc/./_floatdidf.oS libgcc/./_floatdisf.oS libgcc/./_fixunsdfsi.oS libgcc/./_fixunssfsi.oS libgcc/./_fixunsdfdi.oS libgcc/./_fixdfdi.oS libgcc/./_fixunssfdi.oS libgcc/./_fixsfdi.oS libgcc/./_fixxfdi.oS libgcc/./_fixunsxfdi.oS libgcc/./_floatdixf.oS libgcc/./_fixunsxfsi.oS libgcc/./_fixtfdi.oS libgcc/./_fixunstfdi.oS libgcc/./_floatditf.oS libgcc/./_clear_cache.oS libgcc/./_trampoline.oS libgcc/./__main.oS libgcc/./_exit.oS libgcc/./_absvsi2.oS libgcc/./_absvdi2.oS libgcc/./_addvsi3.oS libgcc/./_addvdi3.oS libgcc/./_subvsi3.oS libgcc/./_subvdi3.oS libgcc/./_mulvsi3.oS libgcc/./_mulvdi3.oS libgcc/./_negvsi2.oS libgcc/./_negvdi2.oS libgcc/./_ctors.oS libgcc/./_divdi3.oS libgcc/./_moddi3.oS libgcc/./_udivdi3.oS libgcc/./_umoddi3.oS libgcc/./_udiv_w_sdiv.oS libgcc/./_udivmoddi4.oS libgcc/./_eprintf.oS libgcc/./_bb.oS libgcc/./__gcc_bcmp.oS
	-rm -rf ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a libgcc/./_muldi3.oS libgcc/./_negdi2.oS libgcc/./_lshrdi3.oS libgcc/./_ashldi3.oS libgcc/./_ashrdi3.oS libgcc/./_ffsdi2.oS libgcc/./_clz.oS libgcc/./_cmpdi2.oS libgcc/./_ucmpdi2.oS libgcc/./_floatdidf.oS libgcc/./_floatdisf.oS libgcc/./_fixunsdfsi.oS libgcc/./_fixunssfsi.oS libgcc/./_fixunsdfdi.oS libgcc/./_fixdfdi.oS libgcc/./_fixunssfdi.oS libgcc/./_fixsfdi.oS libgcc/./_fixxfdi.oS libgcc/./_fixunsxfdi.oS libgcc/./_floatdixf.oS libgcc/./_fixunsxfsi.oS libgcc/./_fixtfdi.oS libgcc/./_fixunstfdi.oS libgcc/./_floatditf.oS libgcc/./_clear_cache.oS libgcc/./_trampoline.oS libgcc/./__main.oS libgcc/./_exit.oS libgcc/./_absvsi2.oS libgcc/./_absvdi2.oS libgcc/./_addvsi3.oS libgcc/./_addvdi3.oS libgcc/./_subvsi3.oS libgcc/./_subvdi3.oS libgcc/./_mulvsi3.oS libgcc/./_mulvdi3.oS libgcc/./_negvsi2.oS libgcc/./_negvdi2.oS libgcc/./_ctors.oS libgcc/./_divdi3.oS libgcc/./_moddi3.oS libgcc/./_udivdi3.oS libgcc/./_umoddi3.oS libgcc/./_udiv_w_sdiv.oS libgcc/./_udivmoddi4.oS libgcc/./_eprintf.oS libgcc/./_bb.oS libgcc/./__gcc_bcmp.oS
	if $(RANLIB_TEST_FOR_TARGET) ; then \
	  $(RANLIB_FOR_TARGET) ./libgcc.a ; \
	else true; fi;

./libgcc_eh.a: stmp-dirs  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o
	-rm -rf ./libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ./libgcc_eh.a libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o
	if $(RANLIB_TEST_FOR_TARGET) ; then \
	  $(RANLIB_FOR_TARGET) ./libgcc_eh.a ; \
	else true; fi;

./libgcc_s.so:  libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_exit.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o libgcc/./libgcc.map
	/home/yanxin/git/jrate/gcc-build/gcc/xgcc -B/home/yanxin/git/jrate/gcc-build/gcc/ -B/usr/local/i686-pc-linux-gnu/bin/ -B/usr/local/i686-pc-linux-gnu/lib/ -isystem /usr/local/i686-pc-linux-gnu/include -O2  -DIN_GCC    -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -isystem ./include  -fPIC -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -shared -nodefaultlibs -Wl,--soname=libgcc_s.so.1 -Wl,--version-script=libgcc/./libgcc.map -o libgcc_s.so.1   libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfsi.o libgcc/./_fixunssfsi.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_exit.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./unwind-c.o -lc && rm -f libgcc_s.so && ln -s libgcc_s.so.1 libgcc_s.so

libgcc-stage-start:
	for dir in libgcc; do \
	  if [ -d $(stage)/$$dir ]; then true; else /bin/sh /home/yanxin/git/jrate/gcc/gcc/mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in libgcc; do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  test ! -f $$dir/stacknote.s || mv $$dir/stacknote.s $(stage)/$$dir; \
	done

stmp-dirs: force
	for d in libgcc; do \
	  if [ -d $$d ]; then true; else /bin/sh /home/yanxin/git/jrate/gcc/gcc/mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi

all: stmp-dirs ./libgcc.a ./libgcc_eh.a ./libgcc_s.so

install: stmp-dirs ./libgcc.a ./libgcc_eh.a ./libgcc_s.so
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcc_eh.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(SHELL) $(srcdir)/mkinstalldirs $(DESTDIR)$(slibdir); /bin/sh /home/yanxin/git/jrate/gcc/install-sh -c -m 644 libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so.1; rm -f $(DESTDIR)$(slibdir)/libgcc_s.so; ln -s libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so
