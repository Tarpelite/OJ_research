#include <stdio.h>
int f(int x){
    if(x==1) return 0;
    for(int a=2;a*a<=x;a++)
    if(x%a==0) return 0;
    return 1;
}

int main(){
    int x,y;
    scanf("%d",&x);
    y=x+1;
    for(y;y<100004;y++){
    if(f(y)){
        printf("%d",y);
        break;
    }
    }
    return 0;
}