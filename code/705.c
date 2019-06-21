#include<stdio.h>
int N(int l,int r,int A[],int n);
int M(int l,int r,int A[],int n);
int H(int l,int r,int A[]);
int min(int,int);
int max(int,int);
int a[100];
int l[100];
int r[100];

int main()
{
	int n,k,i;
	int a1,a2,a3,a4;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++)
	{
		a1=N(l[i],r[i],a,n);
		a2=M(l[i],r[i],a,n);
		a3=min(a1,a2);
		a4=max(a1,a2);
	    printf("%d\n",H(a3,a4,a));
    }
	
	return 0;
}

int N(int l,int r,int A[],int n)
{
	int i;
	int sum=0;
	for(i=l;i<=r;i++)
	{
		sum+=(A[i]%n);
	}
	
	return sum%n;
}

int M(int l,int r,int A[],int n)
{
	int i;
	int pro=1;
	for(i=l;i<=r;i++)
	{
		pro=(pro*(A[i]%n))%n;
	}
	
	return pro%n;
}

int H(int l,int r,int A[])
{
	int i;
	int eo=A[l];
	for(i=l+1;i<=r;i++)
	{
		eo=eo^A[i];
	}
	
	return eo;
}

int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}