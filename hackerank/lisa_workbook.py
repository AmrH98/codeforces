#!/bin/python3

import math
import os
import random
import re
import sys

def workbook(ch, prob, arr):
    page = 1
    special = 0
    for i in range(ch):
        counter = 1
        while counter <= arr[i]:
            if counter == page:
                special+=1
            if counter % prob == 0 or counter == arr[i]:
                page+=1
            counter+=1

    return special
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = list(map(int, input().rstrip().split()))

    result = workbook(n, k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
