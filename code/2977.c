#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i;
    long long int n1=1,m1=1,k1=1,s=1;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        s*=i;
        if(i==m)
            m1=s;
        if(i==n)
            n1=s;
        if(i==m-n)
            k1=s;
    }
    s=m1/n1/k1;
    printf("%lld",s);
    return 0;
}