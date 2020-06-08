from collections import Counter

x = int(input())
sizes = Counter(map(int, input().split()))
n = int(input())
final = 0
for i in range(x-1):
    size, price = map(int, input().split())
    if sizes[size]: 
        final += int(price)
        sizes[size] -= 1

print(final)
