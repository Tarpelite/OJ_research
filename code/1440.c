#include<stdio.h>
int N(int a[],int l,int r,int n);
int M(int a[],int l,int r,int n);
int H(int a[],int l,int r);
int min(int l,int r);
int max(int l,int r);

int main()
{
    int n,K;
        scanf("%d%d",&n,&K);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int l,r,b[n];
    for(i=0;i<K;i++)
    {
        scanf("%d%d",&l,&r);
        b[i]=H(a,min(N(a,l,r,n),M(a,l,r,n)),max(N(a,l,r,n),M(a,l,r,n)));
    }
    for(i=0;i<K;i++)
        printf("%d\n",b[i]);
    return 0;
}

int N(int a[],int l,int r,int n)
{
    int i,x=0;
    for(i=l;i<=r;i++)
        x=(x+a[i])%n;
    return x;
}

int M(int a[],int l,int r,int n)
{
    int i,x=1;
    for(i=l;i<=r;i++)
        x=(x*a[i])%n;
    return x;
}

int H(int a[],int l,int r)
{
    int i,x;
    x=a[l];
    if(l!=r)
        for(i=l+1;i<=r;i++)
            x=x^a[i];
    return x;
}

int min(int l,int r)
{
    int m;
    if(l<r)
        m=l;
    else
        m=r;
    return m;
}

int max(int l,int r)
{
    int m;
    if(l>r)
        m=l;
    else
        m=r;
    return m;
}