n, k = input().split()
scores = list(map(int, input().split()))

limit = scores[int(k)-1]
result = 0
for x in scores:
    if x >= limit and x > 0:
        result +=1

print(result)
