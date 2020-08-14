#!/bin/python3

import math
import os
import random
import re
import sys


def kaprekarNumbers(p, q):
    flag = 0
    for i in range(p, q+1):
        power = str(i**2) 
        length = (len(power)) // 2
        split1 = power[0:length]
        split2 = power[length:]
        if split1=='':
            split1=0
        if split2=='':
            split2=0
        if int(split1) + int(split2) == i :
            print(i,end=' ')
            flag = 1
    if flag == 0:
        print('INVALID RANGE')

if __name__ == '__main__':
    p = int(input())

    q = int(input())

    kaprekarNumbers(p, q)
