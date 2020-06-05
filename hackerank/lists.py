if __name__ == '__main__':
    N = int(input())
    sample = list()
    while N!= 0:
        com = input().split()
        # insert i e: Insert integer  at position .
        # print: Print the list.
        # remove e: Delete the first occurrence of integer .
        # append e: Insert integer  at the end of the list.
        # sort: Sort the list.
        # pop: Pop the last element from the list.
        # reverse: Reverse the list.
        if com[0] == 'insert':
            sample.insert(int(com[1]),int(com[2]))
        elif com[0] == 'print':
            print(sample)
        elif com[0] == 'remove':
            sample.remove(int(com[1]))
        elif com[0] == 'append':
            sample.append(int(com[1]))
        elif com[0] == 'sort':
            sample.sort()
        elif com[0] == 'pop':
            sample.pop()
        elif com[0] == 'reverse':
            sample.reverse()
        else: continue
        N-=1
