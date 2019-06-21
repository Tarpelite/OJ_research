#include<stdio.h>
int a[100003];
int main()
{
	long long n,k,i,ins,m=0;
	scanf("%lld",&n);
//	for(i=0;i<=n+1;i++)
//	{
//		a[i]=0;
//	}
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&ins);
		a[ins]++;
	}
	scanf("%lld",&k);
	for(i=100000;i>=1;i--)
	{
		if(a[i]!=0){
			m++;
			if(m==k){
				printf("%lld %lld",i,a[i]);break;
			}
		}
	}
	
}