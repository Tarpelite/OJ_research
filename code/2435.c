#include <stdio.h>

int N(int l,int r,int a[],int n)
{
	int sum=0;int cout;
	for (cout=l;cout<=r;cout++)
	{
		sum+=a[cout];
	}
	return sum%n;
}

int M(int l,int r,int a[],int n)
{
	int sum=1;int cout;
	if(l==r)
	return a[l]%n;
	sum=a[l]*a[l+1];
	for(cout=l+2;cout<=r;cout++)
	sum=((sum%n)*(a[cout]%n));
	
	return sum%n;
}

int H(int l,int r,int a[],int n)
{
	int sum=0;int cout;
	if(l==r)
	return a[l];
	sum=a[l]^a[l+1];
	for (cout=l+2;cout<=r;cout++)
	{
		sum=sum^a[cout];
	}
	return sum;
}

int main()
{
	int n,k,a[10020],l,r;
	int max,min;
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(k--)
	{
		int sum1,sum2;
		scanf("%d%d",&l,&r);
		sum1=N(l,r,a,n);
		sum2=M(l,r,a,n);
		max=sum1>sum2?sum1:sum2;
		min=sum1<sum2?sum1:sum2;
		printf("%d\n",H(min,max,a,n));
	}
	
	
	return 0;
 }