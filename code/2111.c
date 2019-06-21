#include <stdio.h>
int N(int l, int r, int a[], int n,int m)
{
    int y=0;
    for(int i=l;i<=r;i++)
    {
        y+=a[i];
    }
    y=y%m;
    return y;
}
long long M(int l, int r, int a[], int n,int m)
{
    long long y=1;
    for(int i=l;i<=r;i++)
    {
        y*=a[i]%m;
        y %= m;

    }
    y=y%m;
    return y;
}
int H(int l, int r, int a[], int n)
{
    int y,i;
    y=a[l];
    for(i=l+1;i<=r;i++)
    {
        y=y^a[i];
    }
    return y;
}
int max(int a,int b){
     int y;
     y=a>b?a:b;
     return y;
     }
int min(int a,int b){
     int y;
     y=a<b?a:b;
     return y;
     }
int main()
{
    int n,K;
    scanf("%d%d",&n,&K);
    int m;
    m=n;
    int a[105]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<K;i++)
    {
        int l,r,y;
        scanf("%d%d",&l,&r);
        y=H(min(N(l,r,a,n,m),M(l,r,a,n,m)),max(N(l,r,a,n,m),M(l,r,a,n,m)),a,n);
        printf("%d\n",y);
    }
    return 0;
}