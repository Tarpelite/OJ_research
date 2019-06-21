#include <stdio.h>
#include <stdlib.h>
int f(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    int f(int a);
    scanf("%d",&n);
    i=n+1;
    while(1)
    {
        if(f(i))
        {
           printf("%d",i);
           break;
        }
        i++;
    }
    return 0;
}