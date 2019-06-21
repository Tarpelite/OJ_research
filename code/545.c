#include<stdio.h>
int main()
{
	long long m,n,sum=1;
	int i;
	scanf("%lld%lld",&m,&n);
	for(i=n+1;i<=m;i++) sum*=i;
	for(i=2;i<=m-n;i++) sum/=i;
	printf("%lld",sum);
	return 0;
}