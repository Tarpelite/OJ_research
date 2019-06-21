#include<stdio.h>
int a[10000];
int b[10000];
int N(int l,int r,int n, int a[])
{
	int sum = 0;
	for(int i=l; i<=r; i++)
	{
		sum = (a[i] + sum) % n;
	}
	return sum;
 } 
 
int M(int l, int r, int n, int a[])
{
	int sum = 1;
	for(int i=l; i<=r; i++)
	{
		sum = (a[i] * sum) % n;
	}
	return sum;
}

int H(int l, int r,int a[])
{
	int sum=0;
	for(int i=l; i<=r; i++)
	{
		sum ^= a[i];
	}
	return sum;
}

int min(int a, int b)
{
	return a>b? b : a;
}

int max(int a, int b)
{
	return a>b? a : b;
}

int main()
{
	int n,k,l,r,x,y;
	int q=0;
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	while(k--)
	{
		scanf("%d%d",&l,&r);
		x = N(l,r,n,a);
		y = M(l,r,n,a);
		b[q] = H(min(x,y),max(x,y),a);
		q++;
	}
	for(int i=0; i<q; i++)
	{
		printf("%d\n",b[i]);
	}
	
}