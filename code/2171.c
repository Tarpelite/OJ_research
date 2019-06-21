#include <stdio.h>
#include <stdlib.h>
long long jc(int n){
    if((n==1)||(n==0)) return 1;
    else return n*jc(n-1);
}
int main()
{
    int m,n;
    long long res;
    scanf("%d%d",&m,&n);
    if(m==0) res = 0;
    else{
        res = jc(m)/(jc(n)*jc(m-n));
    }
    printf("%lld",res);
    return 0;
}