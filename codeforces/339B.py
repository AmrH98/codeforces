# B. Xenia and Ringroad
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order. The ringroad traffic is one way and also is clockwise.
#
# Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number a i and complete all tasks with numbers less than i. Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.

# n = NUMBER OF HOUSES, m = Tasks, ai = task in the i house


house, jobCount = input().split()
job = input().split()
job = job[:int(jobCount)]

time = 0
pos = 1
for x in job:
    found = 1
    while found != 0:
        if pos > int(house):
                pos = 1
                continue
        if pos == int(x):
            found -=1
        else:
            pos+=1
            time+=1
print(time)
