
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
int main()
{
    int i,n,fours,k;
    scanf("%d",&n);
    if (n<0 || n>pow(10,6))
    {
        printf("-1");
        return 0;
    }
    int sevens=n/7;
 
    while(sevens>=0)
    {
        k=n-(7*sevens);
        if(k%4==0)
        {
            fours=k/4;
            for(k=0; k<fours; k++)
                printf("4");
            for (i=0; i<sevens; i++)
                printf("7");
                return 0;
        }
        else
        sevens-=1;;
 
    }
    printf("-1");
 
 
    return 0;
}
