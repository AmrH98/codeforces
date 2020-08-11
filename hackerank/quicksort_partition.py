#!/bin/python3

import math
import os
import random
import re
import sys


def quickSort(arr):
    left, right = [], []
    pivot = arr[0]
    for x in arr:
        if x < pivot:
            left.append(x)
        elif x > pivot:
            right.append(x)
        else:
            continue
    temparray = left
    temparray.append(pivot)
    for x in right:
        temparray.append(x)
    return temparray
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = quickSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
