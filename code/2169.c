#include<stdio.h>
#define MAX(x, y) x>y?x:y
#define MIN(x, y) x<y?x:y
int N(int, int);
int M(int, int);
int H(int, int);
int l, r, n, a[100],i;
int main()
{
	int K,x,y;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
    while(~scanf("%d%d",&l, &r))
	{
        x=N(l, r);
        y=M(l, r);
		printf("%d\n",H(MIN(x, y), MAX(x, y)));
	 }
    return 0;
 }

int N(int l,int r)
{
	int p=0;
	for(i=l;i<=r;i++)
	{
		p+=(a[i]%n);
	}
	return p%n;
}
int M(int l,int r)
{
    int q=1;
    for(i=l;i<=r;i++)
    {
        q=(q*a[i])%n;
    }
    return q%n;
}
int H(int min, int max)
{
    int s=a[min];
    for(i=min+1;i<=max;i++)
    {
        s=s^a[i];
    }
    return s;
}