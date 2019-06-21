#include<stdio.h>
int f(int y,int x)
{
	int i,j,sum=1;
	for(i=y,j=0;j<x;j++,i--)
	{
		sum=sum*i/(j+1);
	}
	return sum;
}
int main()
{
	int a,m,n;
	scanf("%d %d",&m,&n);
	a=f(m,n);
	printf("%d",a);
	
	return 0;
	
}