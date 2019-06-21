#include<stdio.h>
int f(int x)
{
    int y,i;
    for(y=x-1,i=0,x++;y>1;y--)
    {
        if((x%y)==0)
        {
            x++;
            y=x-1;
        }
    }
    return x;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}