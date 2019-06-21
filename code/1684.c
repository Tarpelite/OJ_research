#include <stdio.h>
int a[101];
int N(int l,int r,int n)
{
    int i;
    int sum=0;
    for(i=l; i<=r; i++)
        sum+=a[i];
    return sum%n;
}
int M(int l, int r, int n)
{
    int i;
    int mul=1;
    for(i=l; i<=r; i++){
        mul%=n;
        mul*=a[i]%n;
    }
    return mul%n;
}
int H(int l,int r)
{
    int i;
    int huo=0;
    for(i=l; i<=r; i++)
        huo^=a[i];
    return huo;
}
int min(int m, int n)
{
    if(m<n)
        return m;
    else
        return n;
}
int max(int m, int n)
{
    if(m>n)
        return m;
    else
        return n;
}
int main()
{
    int n, K, i, l, r;
    scanf("%d%d",&n,&K);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<K; i++)
    {
        scanf("%d%d",&l,&r);

        printf("%d\n", H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n))));
    }
    return 0;
}