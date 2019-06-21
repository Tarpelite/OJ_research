#include<stdio.h>

int zs(long long x)
{
    int i;
    for(i=x/2;i>1;i--)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    if(i==1)
    {
        return 1;
    }
}


int main()
{
    long long x,i;
    scanf("%lld",&x);

    i=x+1;
    while(zs(i)==0)
    {
        i++;
    }
    printf("%lld",i);


    return 0;
}