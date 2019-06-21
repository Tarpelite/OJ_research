#include<stdio.h>

int main()
{
    int n,H,K,l,r,i,j,min,max;
    long long M,N;
    int a[101];
    scanf("%d%d",&n,&K);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    for(i=1;i<=K;i++)
    {
        M=1;
        N=0;
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
        N=(N+(a[j]%n))%n;
        M=(M*(a[j]%n))%n;
        
        }
        N=N%n;
        M=M%n;
        if(M>N)
        {
            max=M;
            min=N;
        }
        else
        {
            max=N;
            min=M;
        }
        H=a[min];
        for(j=min+1;j<=max;j++)
        {
            H=H^a[j];
        }
        printf("%d\n",H);
    }
    return 0;
}