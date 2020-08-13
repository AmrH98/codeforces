#!/bin/python3

import math
import os
import random
import re
import sys


def breakingRecords(scores):
    highest = scores[0]
    lowest = scores[0]
    countH = 0
    countL = 0
    for x in range(1,len(scores)):
        if scores[x] < lowest:
            countL +=1 
            lowest = scores[x]
        elif scores[x] > highest:
            highest = scores[x]
            countH+=1
    return countH, countL
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
