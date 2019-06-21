#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int N(int,int);
int M(int,int);
int H(int,int);
int n,a[105];
int main()
{
	int K,i,l,r,max,min;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(;K>0;K--)
	{
		scanf("%d%d",&l,&r);
		max = N(l,r)>M(l,r) ? N(l,r) : M(l,r);
		min = N(l,r)<M(l,r) ? N(l,r) : M(l,r);
		printf("%d\n",H(min,max));
	}
 	return 0;
}


int N(int l,int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum += (a[i]%n);
	}
	sum %= n;
	return sum;
}

int M(int l,int r)
{
	int sum=1,i;
	for(i=l;i<=r;i++)
	{
		sum *= (a[i]%n);
		sum %= n;
	}
	return sum;
}

int H(int l,int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
		sum ^= a[i];
	return sum;
}