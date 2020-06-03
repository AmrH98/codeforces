A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. 
Given an array of  integers and a number, perform  left rotations on the array.
Then print the updated array as a single line of space-separated integers.

import os
import sys



if __name__ == '__main__':
    nd = input().split()

    n = int(nd[0])

    d = int(nd[1])

    a = list(map(int, input().rstrip().split()))
    a = a[:n]
    temp = []
    for i in range(len(a)):
        print(a[(i+d)%n], end=' ')
