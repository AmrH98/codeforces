
import math
import os
import random
import re
import sys


def getMinimumCost(friends, flowers):
    flowers.sort(reverse=True)
    rounds = -1
    price = 0
    countf = len(flowers)
    while countf != 0:
        rounds += 1
        for i in range(friends):
            if countf == 0:
                break
            price += (rounds + 1) * flowers[i]
            print(price)
            countf -= 1
        flowers = flowers[friends:]


    return price


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    minimumCost = getMinimumCost(k, c)

    fptr.write(str(minimumCost) + '\n')

    fptr.close()
