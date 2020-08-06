import math
import os
import random
import re
import sys


def insertionSort1(n, arr):
    curr = n - 1
    temp = arr[curr]
    for i in range(n-1,0,-1):
        if arr[i-1] > temp:
            arr[i] = arr[i-1]
        else:
            arr[i] = temp
            curr = i - 1
            temp = arr[curr]
        
        for x in arr:
            print(x, end=" ")
        print('')

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort1(n, arr)
