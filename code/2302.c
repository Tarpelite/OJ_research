#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long nima(long long x);

int main()
{
    long long m,n;
    long long a,b,c,s;

    scanf("%lld%lld",&m,&n);

    if(m>=n){
        a=nima(m);
        b=nima(n);
        c=nima(m-n);

        s=a/b/c;
    }
    else{
        s=1;
    }

    printf("%lld",s);

    return 0;
}

long long nima(long long x)
{
    long long i,j;

    for(i=1,j=1;i<=x;i++){
        j=j*i;
    }

    return j;
}