#include <stdio.h>
#include <string.h>
#include <math.h>
long long N(int,int,int [],int);
long long M(int,int,int [],int);
long long H(long long,long long,int [],int);
long long min(long long,long long);
long long max(long long,long long);
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int a[105]={0},i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k,l,r;
    for (k=0;k<q; k++)
    {
        scanf("%d %d",&l,&r);
        printf("%lld\n",H(min(N(l,r,a,n),M(l,r,a,n)),max(N(l,r,a,n),M(l,r,a,n)),a,n));
    }
}


long long N(int l,int r,int a[],int n)
{
    int i;
    long long s=0;
    for (i=l; i<=r; i++)
    {
        s+=a[i];
    }
    return (s%n);
}
long long M(int l,int r ,int a[],int n)
{
    int i;
    long long s=1;
    for (i=l; i<=r; i++)
    {
        s*=a[i];
        s%=n;
    }
    return s;
}
long long H(long long l,long long r,int a[],int n)
{
    long long i,s=0;
    for (i=l; i<=r; i++) {
        s=s^a[i];
    }
    return s;
}

long long min(long long a,long long b)
{
    if (a<b) {
        return a;
    }
    return b;
}

long long max(long long b,long long a)
{
    if (b<a) {
        return a;
    }
    return b;
}