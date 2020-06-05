# def swap_case(s):
    return s.swapcase()
    # s.split()
    # p =[]
    # for i in s:
    #     if i.isupper():
    #         p.append(i.lower())
    #     else:
    #         p.append(i.upper())
    # return s.join(p)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
