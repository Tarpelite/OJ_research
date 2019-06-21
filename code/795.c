#include <stdio.h>
int a[10001] = {0}, n = 0;
int N(int l, int r)
{
    int i = l, result = 0;
    for(i = l; i <= r; i++) result += a[i];
    result %= n;
    return result;
}

int M(int l, int r)
{
    int i = l, result = 1;
    for(i = l; i <= r; i++)
    {
        result *= a[i] % n;
        result %= n;
    }
    return result;
}

int H(int l, int r)
{
    int i = l, result = a[l];
    for(i = l + 1; i <= r; i++) result ^= a[i];
    return result;
}

int max(int l, int r)
{
    if(l > r) return l;
    else return r;
}

int min(int l, int r)
{
    if(l < r) return l;
    else return r;
}

int main(){
    int k = 0, i = 0, l = 0, r = 0;
    scanf("%d%d",&n,&k);
    for(i = 0; i < n; i++) scanf("%d",&a[i]);
    for(i = 1; i <= k; i++)
    {
        scanf("%d%d",&l,&r);
        printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
    }
    return 0;
}