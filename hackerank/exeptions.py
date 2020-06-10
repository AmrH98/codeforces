t = int(input())
for i in range(t):
    case1, case2 = input().split()
    try: 
        print(int(case1)//int(case2))
    except Exception as error:
        print("Error Code:", error)
