import re
n = int(input())
for i in range(n):
    try: 
        if re.compile(str(input())):
            print('True')
    except:
        print('False')
