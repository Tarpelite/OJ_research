#include<stdio.h>
int main()
{
    long long int m,n,k,a,b,c,r,i;
    scanf("%lld %lld",&m,&n);
    k=m-n;
    a=1;
    b=1;
    if(m==0)
        printf("%lld",m+1);
    else
    {
        for(i=n+1;i<=m;i++)
    {
        a*=i;
    }
        for(i=1;i<=k;i++)
    {
        b*=i;
    }
    r=a/b;
    printf("%lld",r);
    }
    return 0;
}