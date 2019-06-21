#include <stdio.h>
long long jc(int x){
    int i;
    long long j=1;
    for(i=1;i<=x;i++){
        j*=i;
    }
    return j;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%lld",jc(m)/jc(n)/jc(m-n));
}