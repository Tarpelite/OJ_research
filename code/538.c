#include <stdio.h>
int N(int l,int r,int A[],int n)
{
	int num=0;
	int c=0;
	int i;
	for(i=l;i<=r;i++)
	{
		num=(num+A[i])%n;
	}
	c=num;
	return c;
}

int M(int l,int r,int A[],int n)
{
	int c=1;
	int i;
	for(i=l;i<=r;i++)
	{
		c=(c*A[i])%n;
	}
	return c;
}

int H(int l,int r,int A[])
{
	int j=A[l];
	int i;
	for(i=l+1;i<=r;i++)
	{
		j=j^A[i];
	}
	return j;
} 

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int A[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int j;
	int c,l,r;
	for(j=0;j<k;j++)
	{
		scanf("%d %d",&l,&r);
		if(N(l,r,A,n)>M(l,r,A,n))
		{
			c=H(M(l,r,A,n),N(l,r,A,n),A);
		}
		else
		{
			c=H(N(l,r,A,n),M(l,r,A,n),A);
		}
		printf("%d\n",c);
	}
	return 0; 
}