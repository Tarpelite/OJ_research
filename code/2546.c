#include <stdio.h>
int a[10000];
int N(int l,int r,int n)
{
	int sum=0;
	for(;l<=r;l++)
	{
		sum+=a[l];
		sum%=n;
	}
	return sum;
}
int M(int l,int r,int n)
{
	int sum=1;
	for(;l<=r;l++)
	{
		sum*=a[l];
		sum%=n;
	}
	return sum;
}
int H(int l,int r)
{
	int sum=a[l++];
	for(;l<=r;l++)
	{
		sum^=a[l];
	}
	return sum;
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
	int n,k,l,r;
	scanf("%d %d",&n,&k);
	for(l=0;l<n;l++) scanf("%d",&a[l]);
	for(;k>0;k--)
	{
		scanf("%d %d",&l,&r);
		printf("%d\n",H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n))));
	}
	return 0;
}