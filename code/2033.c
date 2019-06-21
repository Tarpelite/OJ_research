#include<stdio.h>
int A[10000],n;
int N(int l,int r)
{
	int i,a=0;
	for(i=l;i<=r;i++)
	a=a+A[i];
	a=a%n;
	return a;
} 
int M(int l,int r)
{
	int i,a=1;
	for(i=l;i<=r;i++)
	{ 
	a=a*(A[i]%n);
	a=a%n; 
	} 
	a=a%n; 
	return a;
}
int H(int l,int r)
{
	int i,B[10000];
	B[l]=A[l];
	for(i=l;i<=r-1;i++)
	B[i+1]=B[i]^A[i+1];
	return B[r];
}
int max(int a,int b)
{
	if(a<=b)
	return b;
	else
	return a;
}
int min(int a,int b)
{
	if(a<=b)
	return a;
	else
	return b;
}

int main()
{
	int K,l[10000],r[10000],i;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<K;i++)
	scanf("%d%d",&l[i],&r[i]);
	int x,y;
	for(i=0;i<K;i++)
	{
	x=min(N(l[i],r[i]),M(l[i],r[i]));
	y=max(N(l[i],r[i]),M(l[i],r[i]));
	printf("%d\n",H(x,y));
}
	return 0;
}