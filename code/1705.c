#include<stdio.h>
int main()
{
	int m,n,i;
	long long ans_zi=1,ans_mu=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	{
		ans_zi=ans_zi*i;
	}
	for(i=1;i<=n;i++)
	{
		ans_mu=ans_mu*i;
	}
	printf("%lld",ans_zi/ans_mu);
}