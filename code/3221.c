#include<stdio.h>
int main(){
    int i,n,i1,kiss=0;
    scanf("%d",&n);
    i=n;
    while(kiss==0){
            kiss=1;
            i++;
        for(i1=2;i1<=(i/2)+1;i1++){
            if(i%i1==0){
               kiss=0;
               break;
            }
        }
    }
    printf("%d",i);
}