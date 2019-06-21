#include<stdio.h> 
	int A[105];
	int l[105],r[105];
	int res[105],s[105];
int N(int n,int l,int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum+=A[i];
	}
	sum=sum%n; 
	return sum;
}

int M(int n,int l,int r)
{
	int res=1,i,k=0;
	for(i=l;i<=r;i++)
	{
		res*=(A[i]%n);
		res=res%n; 
	}
	res=res%n;
	return res;
}

int H(int l,int r)
{
	int res=A[l],i;
	for(i=l;i<r;i++)
	{
		res^=A[i+1];
	}
	return res;
}

int max(int a,int b)
{
	return a>b?a:b;
}

int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&l[i],&r[i]);
	}
	for(i=0;i<k;i++)
	{
		res[i]=H(min(N(n,l[i],r[i]),M(n,l[i],r[i])),max(N(n,l[i],r[i]),M(n,l[i],r[i])));
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n",res[i]);
	}
	return 0;
}