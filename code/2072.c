#include<stdio.h>
long long jie(long long n)
{
	long long m=1;
	for(long long i=1;i<=n;i++)
	m=m*i;
	return m;
}
int main()
{
	long long m,n,ans;
	scanf("%lld%lld",&m,&n);
	ans=jie(m)/(jie(n)*jie(m-n));
	printf("%lld",ans);
	return 0;
}