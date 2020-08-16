#include<stdio.h>
#include<string.h>
 
int main()
{
char s[100];
int c=0,sum=0,i;
while(gets(s)!='\0')
{
if(s[0]=='+')
++c;
else
if(s[0]=='-')
--c;
else
{
for(i=0;s[i]!=':';++i);
++i;
sum+=(strlen(s)-i)*c;
}
 
}
printf("%d",sum);
return 0;
 
}
