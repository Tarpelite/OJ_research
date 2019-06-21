#include <stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    unsigned long long JC(int a){
        if (a==0) return 1;
        else return a*JC(a-1);
    }
    long long answer=JC(m)/JC(n)/JC(m-n);
    printf("%lld",answer);
    return 0;
}