#pseudocode
# procedure insertionSort( A : array of items )
#    int holePosition
#    int valueToInsert
    
#    for i = 1 to length(A) inclusive do:
    
#       /* select value to be inserted */
#       valueToInsert = A[i]
#       holePosition = i
      
#       /*locate hole position for the element to be inserted */
        
#       while holePosition > 0 and A[holePosition-1] > valueToInsert do:
#          A[holePosition] = A[holePosition-1]
#          holePosition = holePosition -1
#       end while
        
#       /* insert the number at hole position */
#       A[holePosition] = valueToInsert
      
#    end for
    
# end procedure

import math
import os
import random
import re
import sys
import timeit

# start = timeit.default_timer()

def insertionSort2(n, arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=key
        print(*arr)


    
if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort2(n, arr)

    stop = timeit.default_timer()

    # print('Time: ', stop - start)   
