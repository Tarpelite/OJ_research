#include<stdio.h>
int bu(int y)
{   int x;
    for(x=2;x<=y;x++){if(y%x==0)break;}
    if(x==y)return y;
    else return 0;
}
int main()
{
    int x,y,m;
    scanf("%d",&x);
    for(y=x+1;;y++){m=bu(y);if(m!=0)break;}
    printf("%d",m);
}