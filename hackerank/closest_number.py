
import math
import os
import random
import re
import sys


def closestNumbers(arr):
    minimum = max(arr)
    arr.sort()
    result = [arr[0],arr[1]]
    for i in range(1, len(arr)-1):
        if arr[i+1] - arr[i] < minimum:
            result = []
            minimum = arr[i+1] - arr[i]
            result.append(arr[i])
            result.append(arr[i+1])
        elif arr[i+1] - arr[i] == minimum:
            result.append(arr[i])
            result.append(arr[i+1])
    
    return result


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = closestNumbers(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
