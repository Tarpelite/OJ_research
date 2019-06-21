#include <stdio.h>
int f(int);
int main()
{
    int n,i,m=0,x,y;
    scanf("%d",&n);
    x=n;
    while(1)
    {
        x=x+1;
        y=f(x);
        if(y==2) break;
    }
    printf("%d",x);
    return 0;
}
int f(int x)
{
    int m=0,i;
    for(i=1;i<=x;i++)
    {if(x%i==0) m++;}
    return m;
}