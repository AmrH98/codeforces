# time complexity check

import math
import os
import random
import re
import sys


def activityNotifications(expenditure, d):
    
    notifications = 0
    slices = len(expenditure) - d 
    for i in range(slices):
        arraySorted = expenditure[i:d+i]
        arraySorted.sort()
        median = 0
        if (len(arraySorted) % 2) != 0:
            median = len(arraySorted) // 2
        else:
            x = len(arraySorted) // 2
            y = x + 1
            median = ( x + y ) // 2 
        limit = arraySorted[median] * 2 
        if expenditure[d+i] >= limit:
            notifications+=1
        
    return notifications



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    expenditure = list(map(int, input().rstrip().split()))

    result = activityNotifications(expenditure, d)

    fptr.write(str(result) + '\n')

    fptr.close()
