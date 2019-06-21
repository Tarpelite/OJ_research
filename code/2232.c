#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,x=1,i,j,y=1;
	scanf("%d%d",&m,&n);
	for (i=m;i>=m-n+1;i--)
	{
		x*=i;
	}
	for (j=1;j<=n;j++)
	{
		y*=j;
	}
	printf("%d",x/y);
	
	return 0;
 }