#include <stdio.h>
#include <stdlib.h>

int min(int a,int b);
int max(int a,int b);
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int A[100],n;

int main()
{
    int k;
    int l,r;
    int i,B[100];
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<k; i++)
    {
        scanf("%d %d",&l,&r);
        B[i]=H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r)));
    }
    for(i=0; i<k; i++)
    {
        printf("%d\n",B[i]);
    }
    return 0;
}

int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int N(int l,int r)
{
    int i;
    long long int x=0;
    for(i=l; i<=r; i++)
    {
        x+=A[i]%n;
    }
    return x%n;
}

int M(int l,int r)
{
    int i;
    long long int x=1;
    for(i=l; i<=r; i++)
    {
        x*=(A[i]%n);
        x=x%n;
    }
    return x;
}

int H(int l,int r)
{
    int i,x=A[l];
    for(i=l+1; i<=r; i++)
    {
        x=x^A[i];
    }
    return x;
}