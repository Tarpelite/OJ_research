#include<stdio.h>


long long N(int l,int r,int a[])
{
	long long sum1=0;
	for(int i=l;i<=r;i++)
	{
		sum1=sum1+a[i];
	}
	return sum1;
 } 
 
long long M(int l,int r,int a[],int n)
{
	long long sum2=1;
	for(int i=l;i<=r;i++)
	{
		sum2=sum2*a[i];
		sum2=sum2%n; 
	}
	return sum2;
 } 
 
int H(int l,int r,int a[])
{
	if(l==r)
	{
		return a[r];
	}
	int sum3=a[l]^a[l+1];
	int i=l+2;
	for(i=l+2;i<=r;i++)
	{
		sum3=sum3^a[i];
	}
	return sum3;
}
/*
int H(int l,int r,int a[])
{
	int i;
	for(i=l;i<r;i++)
	{
		if (a[i]==a[i+1])
		{
			a[i+1]=0;
		}
		else
		{
			a[i+1]=1;
		}
	} 
	return a[r];
} 
*/


int main()
{
	int n,k,l,r,a[10000],b,c;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		b=N(l,r,a)%n;
		c=M(l,r,a,n)%n;
		if(b<c)
		printf("%d\n",H(b,c,a));
		if(b>=c)
		printf("%d\n",H(c,b,a)); 
	}	
}