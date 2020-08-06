
# s: integer, starting point of  house location.
# t: integer, ending location of  house location.
# a: integer, location of the Apple tree.
# b: integer, location of the Orange tree.
# apples: integer array, distances at which each apple falls from the tree.
# oranges: integer array, distances at which each orange falls from the tree.


import math
import os
import random
import re
import sys


def countApplesAndOranges(s, t, a, b, apples, oranges):
    countA = 0 
    countO = 0 
    for i in apples:
        distance = a + i 
        if distance >= s and distance <= t:
            countA +=1 
    for j in oranges:
        distance = b + j
        if distance >= s and distance <= t:
            countO +=1 
    print(countA)
    print(countO)
            
        

if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
