#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int n,k,a[10005],l,r,i;
int main()
{
	int b[10005],j=0,t;
	scanf("%d%d",&n,&k);
	t=k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(;k>0;k--)
	{
		scanf("%d%d",&l,&r);
		b[j]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
		j++;
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
int N(int l,int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum+=a[i]%n;
	}
	return sum%n;
}
int M(int l,int r)
{
	int sum=1,i;
	for(i=l;i<=r;i++)
	{
		sum=((sum%n)*(a[i]%n))%n;
	}
	return sum%n;
}
int H(int l,int r)
{
	int sum=a[l];
	for(i=l;i<r;i++)
	{
		sum=sum^a[i+1];
	}
	return sum;
}