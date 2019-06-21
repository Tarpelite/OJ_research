#include<stdio.h>
int f(int x)
{
    if(x==1)
    {
        return 0;
    }
    for(int a=2;a*a<=x;a++)
    {
        if(x%a==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x,a;
    scanf("%d",&x);
    a=x+1;
    while(f(a)!=1)
    {
        a++;
    }
    printf("%d",a);
    return 0;
}