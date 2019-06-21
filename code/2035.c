#include<stdio.h>

int main()
{
    int m, n, i;
    long long int mm=1, nn=1, ans;
    scanf("%d%d",&m,&n);

    for(i=1;i<=n;i++)
    {
        mm=mm*m;
        m=m-1;
    }

    for(i=n;i>=1;i--)
    {
        nn=nn*i;
    }
    ans=mm/nn;
    printf("%lld",ans);
    return 0;
}