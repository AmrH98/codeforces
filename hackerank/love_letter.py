
import math
import os
import random
import re
import sys


def theLoveLetterMystery(s):
    count = 0
    length = len(s)
    for i in range(length // 2):
        count += abs(oct(s[length - i - 1]) - oct(s[i]))
    return count
def theLoveLetterMystery(s):
    i = 0
    value = 0
    while(i<int(len(s)/2)):
        value += abs(ord(s[i])-ord(s[len(s)-i-1]))
        i+=1
    return value
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = theLoveLetterMystery(s)

        fptr.write(str(result) + '\n')

    fptr.close()
