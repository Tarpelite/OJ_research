#include <stdio.h>
long long mul(long long n);

int main()
{
    long long a,b,x,y,ans;
    scanf("%lld %lld",&a,&b);
    x=mul(a);
    y=mul(b)*mul(a-b);
    ans=x/y;
    printf("%lld",ans);
    return 0;
}

long long mul(long long n){
    long long i,M;
    M=1;
    if(n==0)
        M=1;
    else{
        for(i=n;i>=1;i--){
            M=M*i;
        }
    }
    return M;
}