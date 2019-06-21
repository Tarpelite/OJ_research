#include<stdio.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)

int a[105];
int n;

int fn(int l, int r);
int fm(int l, int r);
int fh(int l, int r);

int main()
{
    int k,i,resu,l,r;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=k;i++){
        scanf("%d %d", &l, &r);
        resu = fh( min(fn(l,r),fm(l,r)), max(fn(l,r),fm(l,r)) );
        printf("%d\n", resu);
    }
}

int fn(int l, int r)
{
    int i,resu=0;
    for(i=l;i<=r;i++){
        resu+=(a[i]%n);
    }
    return (resu%n);
}

int fm(int l, int r)
{
    int i,resu=1;
    for(i=l;i<=r;i++){
        resu=resu*a[i]%n;
    }
    return (resu%n);
}

int fh(int l, int r)
{
    int i,resu=a[l];
    for(i=l+1;i<=r;i++){
        resu=resu^a[i];
    }
    return resu;
}