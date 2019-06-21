#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b? a:b

int main( )
{
    int i,n,m,zi,mu,re;
    scanf("%d %d",&m,&n);
    zi=1;
    for(i=(m-n+1);i<=m;i++){
        zi=zi*i;
    }
    mu=1;
    for(i=1;i<=n;i++){
        mu=mu*i;
    }
    re=zi/mu;
    printf("%d",re);
}