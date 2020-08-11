#!/bin/python3

import math
import os
import random
import re
import sys
import timeit




def countSort(arr):
    # start = timeit.default_timer()
    result = []
    maximum = 0
    for i in range(len(arr)):
        if int(arr[i][0]) > maximum:
            maximum = int(arr[i][0])
    for t in range((len(arr)//2)):
        arr[t][1] = '-'
    countingSort = [0]*int(maximum+1)
    for z in range(len(arr)):
        countingSort[int(arr[z][0])]+=1
    # print(countingSort)
    for j in range(len(countingSort)):
        for i in range(len(arr)):
            if int(arr[i][0]) == j:
                # print(arr[i][1], end=' ')
                result.append(arr[i][1])
    print(*result)

    # stop = timeit.default_timer()
    # print('Time: ', stop - start)  
if __name__ == '__main__':
    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(input().rstrip().split())

    countSort(arr)

