#include <stdio.h>
#include <stdlib.h>
int N(int l,int r,int a[],int n)
{
    int sum = 0;
    for (; l <= r; l++)
    {
        sum = sum%n + (a[l] % n);
    }
    return sum % n;
}
int M (int l,int r, int a[],int n)
{
    int mul = 1;
    for (; l <= r; l++)
    {
        mul =(mul%n) * (a[l] % n);
    }
    return mul % n;
}
int H(int l,int r, int a[],int n)
{
    int yi = a[l];
    for (l = l + 1; l <= r; l++)
    {
        yi = (yi ^ a[l]);
    }
    return yi;
}
int main()
{
    int n,k;
    int a[10009];
    int b[200];
    int i = 0;
    scanf("%d%d",&n,&k);
    for (; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < 2*k; i++)
    {
        scanf("%d",&b[i]);
    }
    for (i = 0; i < k; i++)
    {
        if (N(b[2*i],b[2*i+1],a,n) <= M(b[2*i],b[2*i+1],a,n))
            printf("%d\n",H(N(b[2*i],b[2*i+1],a,n),M(b[2*i],b[2*i+1],a,n),a,n));
        else
            printf("%d\n",H(M(b[2*i],b[2*i+1],a,n),N(b[2*i],b[2*i+1],a,n),a,n));
    }
    return 0;
}