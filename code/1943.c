#include<stdio.h>
int N(int l,int r,int a[],int n);
int M(int l,int r,int a[],int n);
int H(int l,int r,int a[]);
int main()
{
	int a[101],n,k,i,l,r,x1,x2,max,min,b[101];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		x1=N(l,r,a,n);
		x2=M(l,r,a,n);
		max=x1;
		if(x1<x2)max=x2;
		min=x1;
		if(x1>x2)min=x2;
		b[i]=H(min,max,a);
	}
	for(i=0;i<k;i++)printf("%d\n",b[i]);
	return 0;
}
int N(int l,int r,int a[101],int n)
{
	int i,sum=0;
	for(i=l;i<=r;i++)
	{
		sum=(sum+a[i])%n;
	}
	return sum;
}
int M(int l,int r,int a[101],int n)
{
	int i,sum=1;
	for(i=l;i<=r;i++)
	{
		sum=(sum*a[i])%n;
	}
	return sum;
}
int H(int l,int r,int a[101])
{
	int i,sum=a[l];
	for(i=l+1;i<=r;i++)
	{
		sum=sum^a[i];
	}
	return sum;
}