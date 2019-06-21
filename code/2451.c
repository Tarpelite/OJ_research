#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,K,a[10010]={0},b[100],c[100],l,r,M,N,H,t,i,j;
    int sum=0,ans=1;
    scanf ("%d%d",&n,&K);
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    for (i=0;i<K;i++)
        scanf ("%d%d",&b[i],&c[i]);
    for (i=0;i<K;i++)
    {
        l=b[i];
        r=c[i];
        for (j=l;j<=r;j++)
        {
            sum=(sum+a[j])%n;
            ans=(ans*a[j])%n;
        }
        M=sum;
        N=ans;
        if (M>N)
        {
            t=N;
            N=M;
            M=t;
        }
        H=a[M];
        for (j=M+1;j<=N;j++)
        {

            H=H^a[j];
        }
        sum=0;
        ans=1;
        printf ("%d\n",H);
    }

    return 0;
}