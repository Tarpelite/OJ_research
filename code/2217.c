#include<stdio.h>
int f(int);
int main()
{
	int m,n,i,r;
	long long s=1;
	scanf("%d%d",&m,&n);
	if(n==0||m==0)
	printf("0");
	else
	{
	for(i=1;i<=n;i++)
	{
		s=s*(long long)m;
		m=m-1;
	}
	r=f(n);
	printf("%lld",s/r);
}
}
int f(int x)
{
	if(x==1)
	return 1;
	return x*f(x-1);
}