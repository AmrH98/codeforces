answer = input()
answer = [x for x in answer]

result = [0] * 26
for i in range(len(answer)):
    x = ord(answer[i])
    x = x % 97
    result[x] += 1

count = 0
for x in result:
    if x >= 1:
        count+=1

if count % 2 == 0:
    print('CHAT WITH HER!')
else:
    print('IGNORE HIM!')
