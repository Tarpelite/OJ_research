#include<stdio.h>
int main()
{
	int m,n,i;
	long long an=1,nn=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	{
		an=an*i;
	}
	for(i=1;i<=n;i++)
	{
		nn=nn*i;
	}
	printf("%lld",an/nn);
	return 0;
}