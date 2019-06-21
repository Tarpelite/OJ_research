#include<stdio.h>
int main()
{
	long long m,n,res1=1,res2=1,res3=1,i;
	scanf("%lld%lld",&m,&n);
	if(m==0||n==0)printf("1");
	if(m>=n&&m!=0&&n!=0)
	{
	for(i=m;i>=1;i--)
	{
		res1*=i;
	}
	for(i=n;i>=1;i--)
	{
		res2*=i;
	}
	for(i=m-n;i>=1;i--)
	{
		res3*=i;
	}
	printf("%lld",res1/(res2*res3));
	}
	return 0;
}