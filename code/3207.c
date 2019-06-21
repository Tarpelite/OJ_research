#include<stdio.h>
int H(int,int);
int N(int,int,int);
int M(int,int,int);
int max_(int,int);
int min_(int,int);
int a[200],b[200];
int main()
{
    int n,K,i,l,r,y;
    scanf("%d %d",&n,&K);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<K;i++)
    {
        scanf("%d %d",&l,&r);
        b[i]=H(min_(N(l,r,n),M(l,r,n)),max_(N(l,r,n),M(l,r,n)));
    }
    for(i=0;i<K;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}

int N(int l,int r,int n)
{
    int x=0;
    for(l;l<=r;l++)
    {
        x+=a[l];
    }
    x=x%n;
    return x;
}

int M(int l,int r,int n)
{
    int x=1;
    for(l;l<=r;l++)
    {
        x*=(a[l]%n);
        x=x%n;
    }
    x=x%n;
    return x;
}

int H(int b,int c)
{
    int x=a[b];
    if(b==c) return x;
    for(b++;b<=c;b++)
    {
        x=x^a[b];
    }
    return x;
}

int max_(int x,int y)
{
    if(x>y) return x;
    else return y;
}
int min_(int x,int y)
{
    if(x>y) return y;
    else return x;
}