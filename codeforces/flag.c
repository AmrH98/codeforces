#include <stdio.h>
 
int main()
{
	int r,c,i,j,pre=-1;
	char flag[101];
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		scanf("%s",flag);
		if(flag[0]-'0'==pre)
		{
			puts("NO");
			return 0;
		}
		for(j=1;j<c;j++)
		{
			if(flag[j]!=flag[j-1])
			{
				puts("NO");
				return 0;
			}
		}
		pre=flag[0]-'0';
	}
	puts("YES");
	return 0;
}
