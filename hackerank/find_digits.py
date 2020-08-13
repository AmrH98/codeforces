#!/bin/python3

import math
import os
import random
import re
import sys


def findDigits(n):
    count=0
    for x in str(n):
        if (int(x) != 0) and int(n) % int(x) == 0:
            count+=1 
    return count
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()
