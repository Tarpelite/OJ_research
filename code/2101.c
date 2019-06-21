#include<stdio.h>
int main()
{
    long long n,m,a=1,b=1,c=1,t;
    scanf("%lld%lld",&m,&n);
    if(n==0||n>m)
        t=1;
    else
    {
        for(int i=1; i<=m; i++)
            a*=i;
        for(int j=1; j<=n; j++)
            b*=j;
        for(int k=1; k<=m-n; k++)
            c*=k;
        t=a/b/c;
    }
    printf("%lld",t);
    return 0;
}