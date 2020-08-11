#!/bin/python3

import math
import os
import random
import re
import sys


def countingSort(arr):
    result = [0]*100
    answer = []
    for i in range(len(arr)):
        result[arr[i]]+=1
    for a in range(100):
        for b in range(result[a]):
            if result[a] == 0:
                break
            else:
                print(a, end=' ')
                answer.append(a)
    return answer

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
