#include <stdio.h>
int n, a[100];

int N(int, int);
int N(int l, int r)
{
	int sum=0,i;
	for(i=l;i<=r;i++)
	{
		sum=sum+a[i];
	}
	sum=sum%n;
	return sum;
}


int M(int, int);
int M(int l, int r)
{
	int p=1,i;
	for(i=l;i<=r;i++)
	{
		p=p*a[i]%n;
	}
	p=p%n;
	return p;
}

int H(int, int);
int H(int l, int r)
{
	int e=0,i;
	for(i=l;i<=r;i++)
	{
		e=e^a[i];
	}
	return e;
}

int min(int, int);
int min(int a, int b)
{
	int t;
	t=a^((a^b)&-(a>b));
	return t;
}

int max(int, int);
int max(int a, int b)
{
	int t;
	t=a^((a^b)&-(a<b));
	return t;
}

int main()
{
	int K,i,b[100],l,r;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<K;i++)
	{
		scanf("%d%d",&l,&r);
		b[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
	}
	for(i=0;i<K;i++)
	printf("%d\n",b[i]);
	return 0;
}