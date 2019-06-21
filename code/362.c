#include<stdio.h>
int factorial(int x,int y){
if(x==y)
    return 1;
if(y==1)
    return x;
return factorial(x-1,y)+factorial(x-1,y-1);
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",factorial(x,y));
    return 0;
}