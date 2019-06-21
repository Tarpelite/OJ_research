#include<stdio.h>
int main(){
    long long i,m,n,sum1=1,sum=1;
   scanf("%lld%lld",&m,&n);
    for(i=m;i>m-n;i--){
        sum*=i;
    }
    for(i=n;i>0;i--){
        sum1*=i;
    }
    printf("%lld",sum/sum1);
}