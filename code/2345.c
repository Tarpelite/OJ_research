#include<stdio.h>

int main(){
    double m,n,k1=1,k2=1,i,t;
    scanf("%lf%lf",&m,&n);
    for(i=m;i>n;i--){
        k1=k1*i;
    }
    for(i=m-n;i>1;i--){
        k2=k2*i;
    }
    t=k1/k2;
    printf("%.0lf",t);
    return 0;
}