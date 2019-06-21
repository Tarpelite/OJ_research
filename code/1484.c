#include<stdio.h>
int main()
{
	int m,n;
	int x=1;
	int y=1;
	int z=1;
	int i;
	scanf("%d %d",&m,&n);
	for(i=m-n+1;i<m+1;i++)
	{
		x=x*i; 
	}
	for(i=1;i<n+1;i++)
	{
		y=y*i;
	}
	printf("%d",x/y);
	return 0;
}