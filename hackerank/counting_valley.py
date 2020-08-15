#!/bin/python3

import math
import os
import random
import re
import sys


def countingValleys(n, s):
    print('-')
    sLevel, valley = 0, 0
    for x in s:
        if x == 'U':
            sLevel +=1 
        else:
            sLevel-=1
        if sLevel == 0 and x == 'U':
            valley +=1
    return valley

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
