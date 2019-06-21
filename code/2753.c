#include<stdio.h>
long long jc(int n,int m){
    int i;
    long long s=1;
    for(i=n+1;i<=m;i++){
        s*=i;
    }
    return s;
}

int main(){
    int a,b,n;
    scanf("%d%d",&n,&a);
    b=((n-a)>a)?(n-a):a;
    a=n-b;
    printf("%lld",jc(b,n)/jc(1,a));
    return 0;
}