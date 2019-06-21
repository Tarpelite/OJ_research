#include<stdio.h>
#include<math.h>
int n,k,a[101];
int N(int l,int r)
{
	int i,re=0;
	for(i=l;i<=r;i++)
		re=(re+a[i])%n;
	return re%n;
}
int M(int l,int r)
{
	long long int i,re=1;
	for(i=l;i<=r;i++)
		re=(re*a[i])%n;
	return re%n;
}
int H(int l,int r)
{
	int i,re=a[l];
	for(i=l+1;i<=r;i++)
		re^=a[i];
	return re;
}
int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int i,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}
		
}