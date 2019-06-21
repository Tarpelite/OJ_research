#include <stdio.h>

int r,l,a[100];

int N(int l,int r,int n)
{
    int i,result=0;
    for(i=l;i<=r;i++)
    {
        result+=a[i];
        result%=n;
    }
    return result;
}

int H(int l,int r)
{
    int i,result=a[l];
    for(i=l+1;i<=r;i++)
    {
        result^=a[i];
    }
    return result;
}

int min(int a,int b)
{
    if(a>b) return b;
    else return a;
}

int max(int a,int b)
{
    if(a<b) return b;
    else return a;
}

int M(int l,int r,int n)
{
    int i,result=1;
    for(i=l;i<=r;i++)
    {
        result*=a[i];
        result%=n;
    }
    return result;
}

int main()
{
    int i;
    int n,K;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<K;i++)
    {
        scanf("%d%d",&l,&r);
        printf("%d\n",H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n))));
    }
    return 0;
}