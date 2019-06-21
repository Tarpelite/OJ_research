#include<stdio.h>
int main()
{
	int m,n,i;
	long long a=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	{
		a=a*i;
	}
	for(i=n;i>0;i--)
	{
		a=a/i;
	}
	printf("%lld",a);
	return 0;
}