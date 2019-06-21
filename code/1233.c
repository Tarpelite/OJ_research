#include<stdio.h>
int N(int l,int r,int n,int A[10005])
{
	int sum,i;
	sum=0;
	for(i=l;i<r+1;i++)
	{
		sum+=A[i];
	}
	return sum%n;
}
int M(int l,int r,int n,int A[10005])
{
	int res=1;
	int sum,i;
	sum=1;
	for(i=l;i<r+1;i++)
	{
	   res*=A[i]%n;
	   res=res%n;
	}
	return res;
}
int H(int l,int r,int n,int A[10005])
{
	int B[10005]={0};
	int sum,i;
	for(i=l;i<r+1;i++)
	{
		B[i]=A[i];
	}
	if(l==r)
	return A[l];
	else
	for(i=l;i<r;i++)
	{
		sum=B[i]^B[i+1];
		B[i+1]=sum;
	}
	return sum;
}
int min(int a,int b)
{
	if(a>b)
	return b;
	else return a;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else return b;
}
int A[10005];
int J[105];
int main()
{
	int n,k,i,l,r;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l,&r);
		J[i]=H(min(N(l,r,n,A),M(l,r,n,A)),max(N(l,r,n,A),M(l,r,n,A)),n,A);
	 
	}
	for(i=0;i<k;i++)
{
	
	printf("%d\n",J[i]);
}	return 0;
}