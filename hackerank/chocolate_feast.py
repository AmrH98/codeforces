#!/bin/python3

import math
import os
import random
import re
import sys

def chocolateFeast(money, cost, piece):
    c = money / cost
    wrapper = c
    count = int(c)
    while wrapper >= piece:
        count += int(wrapper/piece)
        wrapper = int(wrapper/piece) + (wrapper % piece)
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        ncm = input().split()

        n = int(ncm[0])

        c = int(ncm[1])

        m = int(ncm[2])

        result = chocolateFeast(n, c, m)

        fptr.write(str(result) + '\n')

    fptr.close()
