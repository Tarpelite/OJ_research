#include <stdio.h>
#define MAX_N 100
#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b)) 
int a[MAX_N + 5];
int n;
int N(int l, int r)
{
    int i, s = 0;
    for (i = l;i<=r;i++)
        s += (a[i] % n), s %= n;
    return s;
}
int M(int l, int r)
{
    int i, t = 1;
    for (i = l;i<=r;i++)
        t *= (a[i] % n), t %= n;
    return t;
}
int H(int l, int r)
{
    int i, y = 0;
    for (i = l;i<=r;i++)
    {
        y ^= a[i];
    }
    return y;
}
int main()
{
    int i,K;
    int l,r;
    int mn,mx;
    scanf("%d%d",&n,&K);
    for (i = 0;i<n;i++)
        scanf("%d",&a[i]);
    while (K--)
    {
        scanf("%d%d",&l,&r);
        mn = min(N(l,r), M(l,r));
        mx = max(N(l,r), M(l,r));
        printf("%d\n",H(mn,mx));
    }
	return 0;
}