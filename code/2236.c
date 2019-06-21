#include <stdio.h>
long long yu(int m,int n)
{
	long long j=1,k=1,l=1;
	for(int i=1;i<=m;i++)
	{
		j*=i;
	}
	for(int i=1;i<=n;i++)
	{
		k*=i;
	}
	for(int i=1;i<=m-n;i++)
	{
		l*=i;
	}
	return j/(k*l);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==0)
	{
		printf("0");
		return 0; 
	}
	printf("%lld",yu(m,n));
}