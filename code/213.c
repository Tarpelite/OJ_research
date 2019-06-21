#include <stdio.h>
#include <stdlib.h>
int A[100];
int n,K;
int N(int l,int r);
int M(int,int);
int H(int a,int b);
int main()
{
    int i,a,b,c,d;
    int l,r;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;++i)
        scanf("%d",&A[i]);
    for(i=0;i<K;++i){
        scanf("%d%d",&l,&r);
        a = N(l,r);
        b = M(l,r);
        c = (a>b)?b:a;
        d = (a>b)?a:b;
        printf("%d\n",H(c,d));
    }
    return 0;
}

int N(int l,int r)
{
    int i,c=0;
    for(i=l;i<=r;++i)
        c += A[i];
    return c%n;
}

int M(int l,int r)
{
    int i,c=1;
    for(i=l;i<=r;++i){
        c *= A[i];
        if(c%n==0) return 0;
        while(c>n || c<-n) c = c%n;
    }
    return c;
}

int H(int a,int b)
{
    int i,c=A[a];
    for(i=a+1;i<=b;++i)
        c = c^A[i];
    return c;
}