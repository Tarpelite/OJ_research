#include <stdio.h>
long long jc(int x);
int main(void) {
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%lld",jc(m)/(jc(n)*jc(m-n)));
    return 0;
}

long long jc(int x){
    int i;
    long long sum=1;
    for (i=2; i<=x; i++) {
        sum*=i;
    }
    return sum;
}