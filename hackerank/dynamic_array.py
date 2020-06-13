#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'dynamicArray' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def dynamicArray(n, queries):
    seqlist = [[] for i in range(n)]
    lastan = 0
    answer = []
    for i in range(len(queries)):
        #print(queries[i][2])
        if int(queries[i][0]) == 1:
            seq = (queries[i][1] ^ lastan) % n
            seqlist[seq].append(queries[i][2])
        else:
            seq = (queries[i][1] ^ lastan) % n
            temp = queries[i][2]
            print(temp)
            lastan = seqlist[seq][int(temp) % len(seqlist[seq])]
            print(lastan)
            answer.append(lastan)
    return answer
         
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    q = int(first_multiple_input[1])

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    result = dynamicArray(n, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
