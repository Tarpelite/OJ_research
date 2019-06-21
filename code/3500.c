#include <stdio.h>

int N(int l,int r,int *a,int n)
{
	int i=l,s=0;
	while(i<=r)
	{
		s += a[i++];
	}
	return s%n;
	
}

int M(int l,int r,int *a,int n)
{
	int i=l,s=1;
	while(i<=r)
	{
		s *= a[i++];
		s %= n;
	}
	return s%n;
	
}

int H(int l,int r,int *a,int n)
{
	int i=l,s=a[l];
	while(i++<r)
	{
		s = s^a[i];
	}
	return s;
	
}

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n],i=0;
	
	while(i<n)
		scanf("%d",&a[i++]);
	
	i=0;
	int l,r;
	while(i++<k)
	{
		scanf("%d%d",&l,&r);
		if(N(l,r,a,n)<M(l,r,a,n))
			printf("%d\n",H(N(l,r,a,n),M(l,r,a,n),a,n));
		else
			printf("%d\n",H(M(l,r,a,n),N(l,r,a,n),a,n));
	}
	
	
	
	return 0;
}