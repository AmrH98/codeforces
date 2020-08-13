

import math
import os
import random
import re
import sys


def dayOfProgrammer(year):
    if year == 1918:
        return "26.09.1918"
    elif (year % 4 == 0 and year <= 1917) or (year % 400 == 0) or (year % 4 == 0 and year     % 100 !=0):
        result = '12.09.'
        return result + str(year)
    else:
        result = '13.09.'
        return result + str(year)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()
