#include<stdio.h>

int main()
{
	int m,n;
	int c=1,i;
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++)
	{
		c=c*m;
		m--;
		
	}
	for (i=1;i<=n;i++)
	{
		c/=i;
		
	}
	printf("%d",c);
 }