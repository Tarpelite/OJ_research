#include<stdio.h>
#include<string.h>
#include<math.h>
int N();
int M();
int H();

int main()
{
    int i,n,A[10000]={},k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<k;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int zhi_N,zhi_H,zhi_M,min,max,jieguo;
        zhi_N=N(l,r,A,n);
        zhi_M=M(l,r,A,n);
        if(zhi_N<zhi_M)
            {
                min=zhi_N;
                max=zhi_M;
            }
        else
            {
                min=zhi_M;
                max=zhi_N;
            }
        jieguo=H(min,max,A,n);
        printf("%d\n",jieguo);

    }

    return 0;
}
int N(int l,int r,int A[],int n)
{
    int i,zhi,sum=0;
    for(i=l;i<=r;i++)
    {
        sum+=A[i];
    }
    zhi=sum%n;
    return zhi;
}

int M(int l,int r,int A[],int n)
{
    int i,zhi,multiplication=1;
    for(i=l;i<=r;i++)
    {
        multiplication*=A[i];
        multiplication=multiplication%n;
    }

    zhi=multiplication%n;
    return zhi;
}

int H(int l,int r,int A[],int n)
{
    int i,zhi,yihuo=0;
    yihuo=A[l];
    for(i=l+1;i<=r;i++)
        yihuo=yihuo^A[i];
    zhi=yihuo;
    return zhi;
}