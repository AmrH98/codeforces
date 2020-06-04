 You have to print a list of 
#all possible coordinates given by  on a 3D grid where the sum of is not equal to . Here,

#python x = int ( raw_input()) y = int ( raw_input()) n = int ( raw_input()) ar = [] p = 0 
#for i in range ( x + 1 ) : for j in range( y + 1): if i+j != n: ar.append([]) ar[p] = [ i , j ] p+=1 print ar 
#Other smaller codes may also exist, but using list comprehensions is always a good option. Code using list comprehensions:
#python x = int ( raw_input()) y = int ( raw_input()) n = int ( raw_input()) print [ [ i, j] for i in range( x + 1) 
#for j in range( y + 1) if ( ( i + j ) != n )]

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    lls = [[X, Y, Z] for X in range(x+1) for Y in range(y+1) for Z in range(z+1) if X + Y + Z != n]
    print(lls)
