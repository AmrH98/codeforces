#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 101
int main()
{
    int i=0;
    char a[26];
    for (i=0;i<26;i++)
        a[i]=0;
 
    int count=0;
    int alpha;
    char str[MAX];
    gets(str);
    int l=strlen(str);
 
    for (i=0; i<l; i++)
    {
        if (!islower(str[i]))
        {
            printf("IGNORE HIM!");
            return 0;
 
        }
        alpha = (str[i]-'0')-49;
        a[alpha]=1;
        }
    for (i=0;i<26;i++)
    {
 
        if (a[i]==1)
        count++;
    }
 
if (count%2==0)
    printf("CHAT WITH HER!");
else
    printf("IGNORE HIM!");
return 0;
}
