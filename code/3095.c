#include<stdio.h>
int main(){
    int i,m,n,sum1=1,sum=1;
   scanf("%d%d",&m,&n);
    for(i=m;i>m-n;i--){
        sum*=i;
    }
    for(i=n;i>0;i--){
        sum1*=i;
    }
    printf("%d",sum/sum1);
}