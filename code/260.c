#include<stdio.h>
int A[105],n;
int N(int l,int r)
{
    int sum=0,i;
    for(i=l;i<=r;i++)
    {
        sum+=A[i]%n;
        sum%=n;
    }
    return sum;
}
int M(int l,int r)
{
    int sum=1,i;
    for(i=l;i<=r;i++)
    {
        sum*=A[i]%n;
        sum%=n;
    }
    return sum;
}
int H(int l,int r)
{
    int sum=A[l],i;
    for(i=l+1;i<=r;i++)
    {
        sum=sum^A[i];
    }
    return sum;
}
int main()
{
    int K,l,r,k;
    scanf("%d%d",&n,&K);

    for(k=0;k<n;k++)
        scanf("%d",&A[k]);
    int B[105],min,max;

    for(k=1;k<=K;k++)
    {
        scanf("%d%d",&l,&r);
        min=N(l,r)<M(l,r)?N(l,r):M(l,r);
        max=N(l,r)>M(l,r)?N(l,r):M(l,r);
        B[k]=H(min,max);

    }
        for(k=1;k<=K;k++)
        printf("%d\n",B[k]);
        return 0;

}