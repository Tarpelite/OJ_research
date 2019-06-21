#include<stdio.h>
double f(int x){
    double n=1;
    int i;
    for(i=1;i<=x;i++) n=n*i;
    return n;
}

int main(){
    int m,n,x;
    scanf("%d%d",&m,&n);
    if(n==0) printf("0");
    else{
    x=f(m)/(f(n)*f(m-n));
    printf("%d",x);
    return 0;}
}