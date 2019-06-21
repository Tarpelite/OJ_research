#include <stdio.h>
long long N(long long l,long long r,long long n,long long a[])
{
	long long i,ans=0;
	for(i=l;i<=r;i++)
	{
		ans=(ans+a[i])%n;
	}
	return ans%n;
}
long long M(long long l,long long r,long long n,long long a[])
{
	long long i,ans=1;
	for(i=l;i<=r;i++)
	{
		ans=(ans*a[i])%n;
	}
	return ans%n;
}
long long H(long long l,long long r,long long n,long long a[])
{
	long long i,ans=a[l];
	for(i=l+1;i<=r;i++)
	{
		ans^=a[i];
	}
	return ans;
}

long long MIN(long long x,long long y)
{
	return (x>y)?y:x;
}
long long MAX(long long x,long long y)
{
	return (x>y)?x:y;
}
int main()   //H(MIN(N(l,r,n,a),M(l,r,n,a)),MAX(N(l,r,n,a),M(l,r,n,a))
{
	long long n,K,i,l,r,a[66666]={};
	scanf("%lld %lld",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%lld ",&a[i]);	
	}
	for(i=0;i<K;i++)
	{
		scanf("%lld %lld",&l,&r);
		/*prlong longf("%d\n",N(l,r,n,a));
		prlong longf("%d\n",M(l,r,n,a));
		prlong longf("%d\n",MIN(N(l,r,n,a),M(l,r,n,a)));
		prlong longf("%d\n",MAX(N(l,r,n,a),M(l,r,n,a)));*/
		printf("%lld\n",H(MIN(N(l,r,n,a),M(l,r,n,a)),MAX(N(l,r,n,a),M(l,r,n,a)),n,a));
	}	
	
}