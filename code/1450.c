#include<stdio.h>
int A[101],n,l,r;
int N(l,r)
{
    int i,r1=0;
    for(i=l;i<=r;i++)
       {
           r1+=A[i]%n;r1%=n;}
    return r1%n;
}
int M(l,r)
{
    int i,r2=1;
    for(i=l;i<=r;i++)
        {r2*=A[i]%n;r2%=n;}
    return r2%n;
}
int H(l,r)
{
    int i,r3=A[l];
    for(i=l+1;i<=r;i++)
        r3^=A[i];
    return r3;
}
int max(l,r)
{
    if(l>=r)
        return l;
    else
        return r;
}
int min(l,r)
{
    if(l>=r)
        return r;
    else
        return l;
}
int main()
{
    int k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<k;i++)
    {
        scanf("%d%d",&l,&r);
        printf("%d\n",H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
    }
    return 0;
}