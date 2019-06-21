#include <stdio.h>
int main(){
    int a,i,k=0,j;
    scanf("%d",&a);
    if(a==2){putchar('3');return 0;}
    for(i=a+2;1;i=i+2){
        for(j=3;j<=i/2+1;j=j+2){
            if(i%j==0){k=1;break;}
        }
        if(k==0){printf("%d",i);return 0;}
        k=0;
    }
return 0;
}