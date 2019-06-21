#include<stdio.h>

int zhi(int x)
{
    int i=2;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i<x)
            return 0;
        else
            return 1;
}
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<100000;i++)
    {
        a=a+1;
        if(zhi(a))
        {
            printf("%d",a);
            break;
        }
    }
}