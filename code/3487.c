#include<stdio.h>
#include<math.h>
int f(int x)
{
    for(int i=2;i<x;i++)
        if(x%i==0)
        {
            return 0;
            break;
        }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=a+1;b<(2*a);b++)
    {
        if(f(b)==1)
        {
            printf("%d",b);
            break;
        }
    }
    return 0;
}