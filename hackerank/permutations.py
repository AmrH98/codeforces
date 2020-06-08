from itertools import permutations

letter, perm = input().split()
letter = sorted(letter)
perm = int(perm)
form = [*permutations(letter, perm)]
for i in form:
    print(''.join(i))
