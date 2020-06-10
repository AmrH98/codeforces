from collections import OrderedDict

n = int(input())
dic = OrderedDict()
for i in range(n):
    item, price = input().rsplit(maxsplit=1)
    dic[item] = dic.get(item, 0) + int(price)
for i in dic:
    print('{} {}'.format(i, dic[i]))
