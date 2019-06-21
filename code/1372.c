#include<stdio.h>

long long is_prime(long long a)
{
    long long i;
    int c=1;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
    long long a;
    scanf("%lld",&a);
    a++;
    while(1)
    {
        if(is_prime(a)!=0)
            break;
        else a++;
    }
    printf("%lld",a);
    return 0;
}