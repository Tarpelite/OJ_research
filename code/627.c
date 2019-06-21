#include <stdio.h>
#include <math.h>

int main()
{
	int a[100100]={0},n,x,i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)	{	scanf("%d",&x);		a[x]++;	}
	scanf("%d",&x);
	for (i=100000;i>=0;i--)	
	{
		if (a[i]>0)		x--;
		if (x==0)	{	printf("%d %d\n",i,a[i]);	break;	}	
	}
	return 0;
}