#include<stdio.h>
double fact(int n){
    int i;
    double sum=1;
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    return sum;
}

int main(){
    int m,n;
    double m1,n1,o1;
    scanf("%d%d",&m,&n);
    n1=fact(n),m1=fact(m),o1=fact(m-n);
    printf("%.0lf",m1/(n1*o1));
}