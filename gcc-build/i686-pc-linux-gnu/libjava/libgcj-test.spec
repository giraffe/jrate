#
# This spec file is read by gcj when linking.
# It is only used by the testing harnesses (in libjava and gdb).
#
%rename lib liborig2
*lib: -L/home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libjava/.libs -rpath /home/yanxin/git/jrate/gcc-build/i686-pc-linux-gnu/libjava/.libs   %(liborig2)

