#!/usr/bin/python

from jRateTest import *
import sys

class MemoryArea(jRateTest):
    def __init__(self, fileName, memType):
        self.fileName = fileName;
        self.memType = memType;
        self.testComment = '';

    def __init__(self, memType):
        self.fileName = './memoryDemo';
        self.memType = memType;
        self.testComment = '';
        
    def runImpl(self):
        self.retVal = os.spawnlp(os.P_WAIT, self.fileName,
                                 self.fileName,
                                 self.memType)

        return self.retVal;
#        self.retVal = os.execv(self.fileName, 
#                               [self.fileName, self.memType]) 

if __name__ == '__main__':
    failedTests = 0;
    successfulTests = 0; 
    for i in range(0, 7):
        test = MemoryArea(str(i));
        retVal = test.run();
        print 'Return value:', retVal
        if retVal == 0:
            successfulTests += 1
        else:
            failedTests += 1

    if failedTests != 0:
        print '\n\njRate:>> TEST STATISTICS'
        print '\tFAILDED TESTS: %d' % (failedTests)
    else:
        print 'ALL TESTS EXECUTED SUCCESSFULLY'

