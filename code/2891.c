#include<stdio.h>
int N(int *,int ,int ,int);
int M(int *,int ,int ,int);
int H(int *,int ,int);
int main()
{
	int n,K,k[100],i;
	scanf("%d %d",&n,&K);
	int a[100];
	for  (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l,r;
	for (i=0;i<K;i++)
	{
		scanf("%d %d",&l,&r);
		if(N(a,n,l,r)<=M(a,n,l,r))
		{
			k[i]=H(a,N(a,n,l,r),M(a,n,l,r));
		}
		else
		{
			k[i]=H(a,M(a,n,l,r),N(a,n,l,r));
		}
	}
	for (i=0;i<K;i++)
	{
		printf("%d\n",k[i]);
	}
	return 0;
} 

int N(int *a,int n,int l,int r)
{
	int result=0;
	for (int i=l;i<=r;i++)
	{
		result=(result+a[i])%n;
	}
	return result%n;
}

int M(int *a,int n,int l,int r)
{
	int result=1;
	for (int i=l;i<=r;i++)
	{
		result=(result*a[i])%n;
	}
	return result%n;
}

int H(int *a,int l,int r)
{
	int result=0;
	for (int i=l;i<=r;i++)
	{
		result=result^a[i];
	}
	return result;
}