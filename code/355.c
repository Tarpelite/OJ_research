#include<stdio.h> 
#define MAX_N 100
int a[MAX_N+5];
int n;
int min(int a, int b) 
{
	return a<b?a:b;
}
int max(int a, int b) 
{
	return a>b?a:b;
}
int N(int l, int r)
{
	int i, s=0;
	for(i=l;i<=r;i++)
	s+=(a[i]%n), s%=n;
	return s;
}
int M(int l, int r)
{
	int i, t=1;
	for(i=l;i<=r;i++)
	t*=(a[i]%n), t%=n;
	return t;
}
int H(int l, int r)
{
	int i, y=0;
	for(i=l;i<=r;i++)
	{
	y^=a[i];
}
	return y;
}
int main()
{
	int i, k;
	int l, r;
	int mn, mx;
	scanf("%d%d", &n, &k);
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
	while(k--)
	{
	scanf("%d%d", &l, &r);
	mn=min(N(l, r), M(l, r));
	mx=max(N(l, r), M(l, r));	
	printf("%d\n", H(mn, mx)) ;
}
return 0;
}