#include <stdio.h>
#include <stdlib.h>
int min(int x,int y)
{
    if(x>y)
        return y;
    else
        return x;
}

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}


int main()
{
    long long n,K,l,r,i,j,k,x,y;
    scanf("%lld%lld",&n,&K);
    long long a[n],N[n],M[n],H[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(j=0;j<K;j++)
    {
        N[j]=0;
        M[j]=1;
        scanf("%lld%lld",&l,&r);
        for(k=l;k<=r;k++)
        {
            N[j]+=a[k];
            M[j]*=a[k];
            M[j]%=n;
        }
        N[j]%=n;
        x=min(N[j],M[j]);
        y=max(N[j],M[j]);
        H[j]=a[x];
        for(i=(x+1);i<=y;i++)
        {
            H[j]^=a[i];
        }
    }
    for(i=0;i<K;i++)
        printf("%lld\n",H[i]);
    return 0;
}