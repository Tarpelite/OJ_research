#include <stdio.h>
int n,k;
int a[10005];
int N(int l,int r,int n)
{
	int s=0;
	for(int i=l;i<=r;i++)
	{
		s+=a[i];
	}
	return s%n;
}
int M(int l,int r,int n)
{
	int s=1;
	for(int i=l;i<=r;i++)
	{
		s=s*a[i]%n;
	}
	return s%n;
} 
int min(int a,int b)
{
	return a>b?b:a;
}
int max(int a,int b)
{
	return a>b?a:b;	
}
int H(int l,int r,int n)
{
	int s=0;
	for(int i=l;i<=r;i++)
	{
		s=s^a[i];
	}
	return s;
}
int main()
{	
	int l,r;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(k--)
	{
		scanf("%d%d",&l,&r);
		printf("%d\n",H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n)),n));
	}
	
}