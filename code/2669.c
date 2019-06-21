#include<stdio.h>
int isPrime(int x)
{
    if(x==2)
    {
        return 1;
    }
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    a++;
    for(a;;a++)
    {
        if(isPrime(a))
        {
            printf("%d",a);
            return 0;
        }
    }

    return 0;
}