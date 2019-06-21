#include<stdio.h>
int N(int *A, int l, int r, int n)
{
    int sum=0;
    for(int i=l; i<=r; i++)
    {
        sum = sum + A[i];
    }
    sum = sum%n;
    return sum;
}
int M(int *A, int l, int r, int n)
{
    int mul=1;
    for(int i=l; i<=r; i++)
    {
        mul %= n;
        mul = mul * (A[i]%n);
    }
    return (mul%n);
}
int H(int *A, int l, int r)
{
    int x=A[l];
    for(int i=l+1; i<=r; i++)
    {
        x=x^A[i];
    }
    return x;
}
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
        return b;
}
int max(int a,int b)
{
    if(a<b)
    {
        return b;
    }
    else
        return a;
}

int main()
{
    int n,k,l,r;
    scanf("%d %d",&n,&k);
    int A[n];
    int L[k],R[k];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0; i<k; i++)
    {
        scanf("%d %d",&l,&r);
        L[i]=l;
        R[i]=r;
    }
    for(int i=0;i<k;i++)
    {
        printf("%d\n",H(A,min(N(A,L[i],R[i],n),M(A,L[i],R[i],n)),max(N(A,L[i],R[i],n),M(A,L[i],R[i],n))));
    }
    return 0;
}