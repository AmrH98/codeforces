#!/bin/python3

import math
import os
import random
import re
import sys


def diagonalDifference(arr):
    length = len(arr) 
    sumDiagonal1, sumDiagonal2 =0,0
    k = 0
    print(arr)
    for i in range(length):
        sumDiagonal1 += arr[i][i]
    for i in range(length-1,-1,-1):
        sumDiagonal2 += arr[k][i]
        k+=1
    answer = abs(sumDiagonal1 - sumDiagonal2)

    return answer

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
