#include <stdio.h>
#include <stdlib.h>

int f(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",f(m,n));
    return 0;
}

int f(int x,int y)
{
    if (y==1) return x;
    if (x<y||x==0||y==0) return 0;
    return f(x-1,y)+f(x-1,y-1);
}