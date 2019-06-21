#include <stdio.h>
int f(int n){
if(n==1||n==0){
return 1;}
else return n*f(n-1);
}
int g(int n,int m){
int k=n,time=1;
while(k>=n-m+1){
    time*=k;
    k--;
}
return time;
   }
int main(){

    int m,n;
    scanf("%d%d",&m,&n);
    if(m==0){
        printf("1");
        return 0;
    }
    if(n==0){
        printf("1");
        return 0;
    }
    if(m>=n){
        if(n<=m/2){
            printf("%d",g(m,n)/f(n));
        }
        else if(n>m/2){
            printf("%d",g(m,m-n)/f(m-n));
        }
    }
    else if(m<n)printf("1");
    return 0;
}