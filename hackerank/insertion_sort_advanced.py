#!/bin/python3

import math
import os
import random
import re
import sys

def mergeSort(array):
    arrayLength = len(array)
    mid = arrayLength // 2
    inversions = 0
    if mid > 0:
        left = array[:mid]
        right = array[mid:]
        inversions += mergeSort(left)
        inversions += mergeSort(right)
        inversions += merge(array, left, right)
    return inversions

def merge(arr, left, right):
    i, ileft, iright, inversions = 0,0,0,0

    leftLength = len(left)
    rightLength = len(right)
    while ileft <leftLength and iright < rightLength:
        if left[ileft] <= right[iright]:
            arr[i] = left[ileft]
            ileft += 1
        else:
            arr[i] = right[iright]
            iright += 1
            inversions += leftLength - ileft
        i+=1
    while ileft < leftLength:
        arr[i] = left[ileft]
        ileft += 1
        i +=1
    while iright < rightLength:
        arr[i] = right[iright]
        iright += 1
        i +=1

    return inversions

def insertionSort(arr):
    return mergeSort(arr)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = insertionSort(arr)

        fptr.write(str(result) + '\n')

    fptr.close()
