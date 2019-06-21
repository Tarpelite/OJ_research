#include<stdio.h>

int N(int,int);
int M(int,int);
int H(int,int);
int min(int,int);
int max(int,int);

int a[100];
int n;

int main()
{
    int i,K,l,r;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=K;i++){
        scanf("%d%d",&l,&r);
        printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
    }
    return 0;
}

int N(int l,int r)
{
    int y=0;
    for(;l<=r;l++){
        y=y%n+a[l]%n;
    }
    return y%n;
}

int M(int l,int r)
{
    int y=1;
    for(;l<=r;l++){
        y=(y%n)*(a[l]%n);
    }
    return y%n;
}

int H(int l,int r)
{
    int y;
    y=a[l];
    for(l++;l<=r;l++){
        y=y^a[l];
    }
    return y;
}

int min(int x1,int x2)
{
    if(x1>x2)
        return x2;
    return x1;
}

int max(int x1,int x2)
{
    if(x1>x2)
        return x1;
    return x2;
}