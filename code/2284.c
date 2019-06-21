#include<stdio.h>
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
int N(int,int,int);
int M(int,int,int);
int H(int,int);
int a[110],i,l,r;
int main()
{
	int n,k,min,max,h[110];
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		min=min(N(l,r,n),M(l,r,n));
		max=max(N(l,r,n),M(l,r,n));
		h[i]=H(min,max);
	}
	for(i=1;i<=k;i++)
	{
		printf("%d\n",h[i]);
	}
}
	

int N(int l,int r,int n)
{
	int i,sum=0;
	for(i=l;i<=r;i++)
	sum +=a[i];
	return sum%n;
}
int M(int l,int r,int n)
{
	int i,c=1;
	for(i=l;i<=r;i++)
	{
		c*=a[i];
		if(c>=n)
		c%=n;
	 } 
	return c%n;
}
int H(int l,int r)
{
	int i,yh;
	yh=a[l];
	for(i=l+1;i<=r;i++)
	yh^=a[i];
	return yh;
}