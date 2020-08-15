#!/bin/python3

import math
import os
import random
import re
import sys

def arrayManipulation(m, n, queries):
    result = [0] * (n + 1)
    count = 0
    highest = 0
    for x in queries:
        result[(x[0]) - 1 ] += x[2]
        result[x[1]] -= x[2]
    for y in result:
        count += y
        if count > highest:
            highest = count
    return highest

    # time limit reached
    #     for i in range(x[0]-1, x[1]):
    #         result[i] += x[2]
    # return max(result)
        

 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(m, n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
