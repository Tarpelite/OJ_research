#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
int n,a[1010];
int N(int l,int r)
{
	int ret=0,i;
	for(i=l;i<=r;++i)
		ret=(ret+a[i])%n;
	return ret;
}
int M(int l,int r)
{
	int ret=1,i;
	for(i=l;i<=r;++i)
		ret=(ret*a[i])%n;
	return ret;
}
int H(int l,int r)
{
	int ret=a[l],i;
	for(i=l+1;i<=r;++i)
		ret^=a[i];
	return ret;
}
int main()
{
	int k,i,j,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	while(k--)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}
	return 0;
}