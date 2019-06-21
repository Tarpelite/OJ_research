#include<stdio.h>
int main()
{
	int m,x;
	int a[100000]={0},n,b,y,i=0;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&b);
		a[b]=a[b]+1;
		n--;
	}
	scanf("%d",&y);
	x=100000;
	while(y>0)
	{
		while(a[x]==0)
		{
			x--;
		}
		x--;
		y--;
	}
	printf("%d %d",x,a[x]); 
	return 0;
}