
import math
import os
import random
import re
import sys


def makingAnagrams(s1, s2):
    result = []
    for x in s1:
        if x in s2:
            s1 = s1.replace(x,'',1)
            s2 = s2.replace(x,'',1)

    return (len(s1)+len(s2))

        


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s1 = input()

    s2 = input()

    result = makingAnagrams(s1, s2)

    fptr.write(str(result) + '\n')

    fptr.close()
