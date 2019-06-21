#include <stdio.h>
#include <stdlib.h>
int f(int x,int y)
{
    if (x==y||x==0||y==0) return 1;
    else return f(x-1,y-1)+f(x,y-1);
}

int main()
{
    int m,n,x;
    scanf ("%d%d",&m,&n);

    printf("%d\n",f(n,m));
    return 0;
}