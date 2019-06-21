#include<stdio.h>
#include <stdlib.h>
#include<math.h>
long long m,n,s=1;

int main()
{
    int i;
    scanf("%lld%lld",&m,&n);
    for(i=n+1;i<=m;i++)
        s*=i;
    for(i=1;i<=m-n;i++)
        s/=i;
    printf("%lld",s);
    return 0;
}