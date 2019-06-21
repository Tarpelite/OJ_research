#include<stdio.h>

int main(){
    int i,flag=0,t,m=1,k;
    scanf("%d",&k);
    for(i=k+1;;i++){
        for(t=2;t<i;t++){
            if(i%t==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d",i);
            return 0;
        }
        flag=0;
    }
}