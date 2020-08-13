
import math
import os
import random
import re
import sys


def cutTheSticks(arr):

    result = []
    result.append(len(arr))
    flag = 1
    while flag != 0:
        arr = [i for i in arr if i != min(arr)]
        if len(arr) == 0:
            break
        result.append(len(arr))
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = cutTheSticks(arr)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
