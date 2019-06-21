#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m,n,a=1,b=1,c=1,d=1;
    scanf("%lld%lld",&m,&n);
    for(int i=1;i<=m;i++){
        a=a*i;
    }
    for(int j=1;j<=n;j++){
        b=b*j;
    }
    for(int k=1;k<=(m-n);k++){
        c=c*k;
    }
    d=a/(b*c);
    printf("%lld",d);
    return 0;
}