#include<stdio.h>
int f(int x,int y){
if(x==y)
    return 1;
if(y==1)
    return x;
return f(x-1,y)+f(x-1,y-1);
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",f(x,y));
    return 0;
}