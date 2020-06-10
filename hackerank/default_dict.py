from collections import defaultdict
d = defaultdict(list)
n, m = map(int, input().split())
compare = []
for i in range(1, n+1):
    d[input()].append(i)
for j in range(m):
    compare.append(input())
for item in compare:
    if item in d:
        #print(' '.join(map(str,d[item])))
        for i in range(len(d[item])):
            x = d[item][i]
            print(x, end=' ') 
    else:
        print('-1')
