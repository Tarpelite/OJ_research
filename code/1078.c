#include <stdio.h>
int N(int l,int r,int arr[],int n)
{
	int number=0;
	int c=0;
	int i;
	for(i=l;i<=r;i++)
	{
		number=(number+arr[i])%n;
	}
	c=number;
	return c;
}

int M(int l,int r,int arr[],int n)
{
	int c=1;
	int i;
	for(i=l;i<=r;i++)
	{
		c=(c*arr[i])%n;
	}
	return c;
}

int H(int l,int r,int arr[])
{
	int chu=arr[l];
	int i;
	for(i=l+1;i<=r;i++)
	{
		chu=chu^arr[i];
	}
	return chu;
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;
	int c,l,r;
	for(j=0;j<k;j++)
	{
		scanf("%d %d",&l,&r);
		if(N(l,r,arr,n)>M(l,r,arr,n))
		{
			c=H(M(l,r,arr,n),N(l,r,arr,n),arr);
		}
		else
		{
			c=H(N(l,r,arr,n),M(l,r,arr,n),arr);
		}
		printf("%d\n",c);
	}
	return 0;
}