#include <stdio.h>

int N(int l,int r,int n,int a[]);
int M(int l,int r,int n,int a[]);
int H(int l,int r,int n,int a[]);
int main() 
{
	int n,k;
	scanf("%d %d\n",&n,&k);
	int a[10000];
	int i1,i2;
	for(i1=1;i1<=n;i1++)
	scanf("%d",&a[i1-1]);
	for(i2=1;i2<=k;i2++)
	{
		int l,r,c,b;
		scanf("%d %d\n",&l,&r);
		if (N(l,r,n,a)<M(l,r,n,a))
		{
			c=N(l,r,n,a);
			b=M(l,r,n,a);
		}
		else
		{
			c=M(l,r,n,a);
			b=N(l,r,n,a);
		}
		printf("%d\n",H(c,b,n,a));
	}
	return 0;
}

int N(int l,int r,int n,int a[])
{
	int i,s=0;
	for(i=l;i<=r;i++)
	{
		s+=a[i];
	}
	return s%n;
}

int M(int l,int r,int n,int a[])
{
	int i,s=1;
	for(i=l;i<=r;i++)
	{
		s*=a[i];
		s%=n;
	}
	return s%n;
}
int H(int l,int r,int n,int a[])
{
	int i,s=0;
	for(i=l;i<=r;i++)
	{
		s=s^a[i];
	}
	return s;
}