m = int(input())
m1 = set(input().split())
n = int(input())
n1 = set(input().split())
g = m1.difference(n1)
g2 = n1.difference(m1)
final = g.union(g2)
print('\n'.join(sorted(final, key=int)))