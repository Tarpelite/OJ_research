#include <stdio.h>

#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))
int a[105];
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
int Q(int l, int r)
{
    int i, y = 0;
    for (i = l;i<=r;i++)
    {
        y ^= a[i];
    }
    return y;
}
int main()
{int K,i=0,l,r,b,c,x,y,z;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        x=N(l,r);
        y=M(l,r);
        b=min(x,y);
        c=max(x,y);
        z=Q(b,c);printf("%d\n",z);
    }
    
    
    return 0;
}