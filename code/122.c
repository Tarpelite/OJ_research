#include <stdio.h>

int n;
int A[101]={};
int Niupple(int l, int r);
int MountVoom(int l, int r);
int HugeGun(int l, int r);
int max(int a, int b);
int min(int a, int b);

int main()
{
    int i;
    int k;
    int l, r;
    int b[1000]={};
    int x, y, N, M;

    scanf("%d %d", &n, &k);


    for(i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }


    for(i=1;i<=k;i++)
    {
        scanf("%d %d", &l, &r);
        N=Niupple(l,r);
        M=MountVoom(l,r);
        x=min(N,M);
        y=max(N,M);
        b[i]=HugeGun(x,y);
    }

    for(i=1;i<=k;i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;

}

int Niupple(int l, int r)
{
    int t=l;
    int sum=0;
    for(;t<=r;t++)
    {
        sum=(sum+A[t])%n;
    }
    return sum;
}

int MountVoom(int l, int r)
{
    int sum=1;
    int t=l;

    for(t=l;t<=r;t++)
    {
        sum=(sum*A[t])%n;

    }

    return sum;
}

int HugeGun(int l, int r)
{
    int sum=A[l];
    int t=l+1;
    for(;t<=r;t++)
    {
        sum=sum^A[t];

    }
    return sum;
}

int max(int a, int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if(a>=b)
        return b;
    else
        return a;
}