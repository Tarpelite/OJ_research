#include<stdio.h>
int a[150];
long long N(long long l,long long r,long long n);
long long M(long long l,long long r,long long n);
long long H(long long l,long long r);
int main()
{
	long long K,j,max,min,l,r,n;
	scanf("%lld%lld",&n,&K);
	for(j=0;j<=n-1;j++) scanf("%d",&a[j]);
	while(K--)
	{
		scanf("%lld%lld",&l,&r);
		max=N(l,r,n)>M(l,r,n)?N(l,r,n):M(l,r,n);
		min=N(l,r,n)<M(l,r,n)?N(l,r,n):M(l,r,n);
		printf("%lld\n",H(min,max));
	}
	return 0;
}

long long N(long long l,long long r,long long n)
{
	int i;
	long long ans=0;
	for(i=l;i<=r;i++)
		ans+=a[i]%n;
	return ans%n;
}

long long M(long long l,long long r,long long n)
{
	int i;
	long long ans=1;
	for(i=l;i<=r;i++)
		ans=ans*a[i]%n;
	return ans%n;
}

long long H(long long l,long long r)
{
	int i;
	long long ans=a[l];
	for(i=l+1;i<=r;i++)
		ans^=a[i];
	return ans;
}