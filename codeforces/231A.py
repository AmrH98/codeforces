nProblems= int(input())

result = 0
for i in range(nProblems):
    answer = list(map(int, input().split()))
    n = sum(answer)
    if n >= 2:
        result+=1

print(result)
