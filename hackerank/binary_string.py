#!/bin/python3

import math
import os
import random
import re
import sys


def beautifulBinaryString(b):
    count = 0
    list1 = list(b)
    for i in range(len(b) - 2):
        print (b[i] , b[i+1] , b[i+2])
        if int(list1[i]) == 0 and int(list1[i+1]) == 1 and int(list1[i+2]) == 0:
            count += 1 
            list1[i+2] = '1'
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    b = input()

    result = beautifulBinaryString(b)

    fptr.write(str(result) + '\n')

    fptr.close()
