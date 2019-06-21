#include<stdio.h>
int main()
{
    int n,m,i;
    long long a=1,b=1,c;
    scanf("%d%d",&n,&m);
    if(m<n-m)
    {
        for(i=1;i<=m;i++)
        {
            a=a*i;
        }
        for(i=n;i>=n-m+1;i--)
        {
            b=b*i;
        }
        c=b/a;
        printf("%lld",c);
    }
    else
    {
        for(i=1;i<=n-m;i++)
        {
            a=a*i;
        }
        for(i=n;i>=m+1;i--)
        {
            b=b*i;
        }
        c=b/a;
        printf("%lld",c);
    }
    return 0;
}