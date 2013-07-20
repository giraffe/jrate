#!/bin/bash

CWD=$PWD
pushd $PWD > /dev/null
cd $JRATE_GCC_SRC_HOME/gcc
echo "Making gcj patches..."
cvs -z 9 -q diff -uw > $CWD/diff/jRate-patch.diff
echo "Done!"
popd > /dev/null
