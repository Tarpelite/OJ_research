#include<stdio.h>
int a[10005];
int min(int a,int b)
{
	if(a<b)	return a;
	else	return b;
}
int max(int a,int b)
{
	if(a>b)	return a;
	else	return b;
}
int N(int l,int r,int n)
{
	int s=0,i;
	for(i=l;i<=r;i++)
	{
		s=s+a[i];
	}
	return s%n;
}
int M(int l,int r,int n)
{
	int s=1,i;
	for(i=l;i<=r;i++)
	{
		s=(s*a[i])%n;
	}
	return s%n;
}
int H(int l,int r)
{
	int s=a[l],i;
	for(i=l+1;i<=r;i++)
	{
		s=s^a[i];
	}
	return s;
}
int main()
{
	int n,k,i,l,r,m,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d ",&a[i]);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&l,&r);
		m=min(N(l,r,n),M(l,r,n));
		x=max(N(l,r,n),M(l,r,n));
		printf("%d\n",H(m,x));
	}
	return 0;	
}