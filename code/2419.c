#include<stdio.h>

int c(int,int);

int main(){

    int x,y;

    scanf("%d%d",&x,&y);

    printf("%d",c(x,y));

}

int c(int x,int y)
{

if(x==y)

    {return 1;}

if(y==1)

    {return x;}

return c(x-1,y)+c(x-1,y-1);

}