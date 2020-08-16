
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main()
{
    int count=0;
    int flag=0;
    int zero=0;
    int one=0;
    char str[MAX];
    gets(str);
    int l=strlen(str);
    int i;
    for (i=0; i<l; i++)
    {
        if (str[0]==' ')
            break;
        if (str[i]==str[i+1])
        {
            ++count;
            if (count == 6)
            {
                flag++;
            }
            if (str[i]=1)
                one++;
            else if (str[i]=0)
                zero++;
        }
        else
            count =0;
    }
    if (flag>0)
    {
        printf("YES");
        return 0;
    }
 
