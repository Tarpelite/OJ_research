#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int M(int l,int r);
int N(int l,int r);
int da(int a,int b);
int xiao(int a,int b);
int H(int l,int r);

int a[100];
int n,K;

int main()
{
    int l[100],r[100];
    int p,q,s,t,x;
    int i;

    scanf("%d%d",&n,&K);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<K;i++){
        scanf("%d%d",&l[i],&r[i]);
    }

    for(i=0;i<K;i++){
        p=N(l[i],r[i]);
        q=M(l[i],r[i]);
        s=da(p,q);
        t=xiao(p,q);
        x=H(t,s);

        printf("%d\n",x);
    }

    return 0;
}


int N(int l,int r)
{
    int i,j;

    for(i=l,j=0;i<=r;i++){
        j=j+a[i];
        j=j%n;
    }
    j=j%n;

    return j;
}

int M(int l,int r)
{
    int i,j;

    for(i=l,j=1;i<=r;i++){
        j=j*a[i];
        j=j%n;
    }
    j=j%n;

    return j;
}

int da(int a,int b)
{
    if(b>a){
        a=b;
    }

    return a;
}

int xiao(int a,int b)
{
    if(b<a){
        a=b;
    }

    return a;
}

int H(int l,int r)
{
    int i,j;
    for(i=l+1,j=a[l];i<=r;i++){
        j=j^a[i];
    }

    return j;
}