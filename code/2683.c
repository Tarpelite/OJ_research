#include <stdio.h>

int main()
{
	int m,n,sumone=1,sumtwo=1,i;
	scanf("%d%d",&m,&n);
	for(i=m;i>=m-n+1;i--)
	{
		sumone*=i;
	}
	for(i=n;i>=1;i--)
	{
		sumtwo*=i;
	}
	printf("%d\n",sumone/sumtwo);
	return 0;
}