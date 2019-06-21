#include<stdio.h>
int main()
{
	int n,a[10000],i,j;
	scanf("%d",&n);
	for(i=0;i<=10000;i++)
	{
		a[i]=n+i+1;
	}
	for(i=0;i<=10000;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			  break;
		}
		if(j==a[i])
		{
			printf("%d",a[i]);
			return 0;
		}
	}
 }