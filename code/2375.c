#include<stdio.h>
#include<math.h>
#define max(a,b)((a>=b)?(a):(b))
#define min(a,b)((a<=b)?(a):(b))
int N(int i,int l,int r,int n,int a[])
{
	int t=0;
	for(i=l;i<=r;i++)
	{
		t+=a[i];
	}
	return t%n;
}
int M(int i,int l,int r,int n,int a[])
{
	int t=1;
	for(i=l;i<=r;i++)
	{
		t=t*(a[i]%n)%n;
	}
	return t%n;
}
int H(int i,int l,int r,int n,int a[])
{
	int t;
	if(l==r)
	return a[l];
	else
	return a[r]^H(i,l,r-1,n,a);
}
int main()
{
	int l, r, n, a[10005];
	int row, len, i, q, e, w;
	scanf("%d %d", &len, &row);
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<row;i++)
	{
		scanf("%d %d",&l, &r);
		q=N(i,l,r,len,a);
		w=M(i,l,r,len,a);
		e=H(i,min(q,w),max(q,w),len,a);
		printf("%d\n", e);
	}
	return 0;
}