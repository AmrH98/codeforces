# B. Xenia and Ringroad
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order. The ringroad traffic is one way and also is clockwise.
#
# Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number a i and complete all tasks with numbers less than i. Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.

# n = NUMBER OF HOUSES, m = Tasks, ai = task in the i house

n, m = input().split()
a = input().split()
a = a[:int(m)]
time = 0
pos = 1
m = int(m)
for i in a:
        while pos!=i:
            if pos > int(n):
                pos = 1
            i = int(i)
            if pos == i:
                m -=1
            else:
                time+=1
                pos +=1

print(time)
