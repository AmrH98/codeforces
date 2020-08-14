#better pythonic solution Ongoing

import math
import os
import random
import re
import sys


def cavityMap(grid):
    border = int(grid[0][0]) + int(grid[0][len(grid[0]) - 1]) + int(grid[len(grid)-1][0]) + int(grid[len(grid)-1][len(grid[len(grid)- 1]) - 1] )
    answer = []
    for i in range(len(grid)):
        result = []
        result.append(grid[i][0])
        for j in range(1, len(grid[i]) - 1):
            if int(grid[i][j]) > border:
                result.append('X')
            else:
                result.append(grid[i][j])
        result.append(grid[i][len(grid)-1])
        print(''.join(result))
        answer.append(''.join(result))
    return answer
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    grid = []

    for _ in range(n):
        grid_item = input()
        grid.append(grid_item)

    result = cavityMap(grid)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
