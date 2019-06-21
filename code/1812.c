#include <stdio.h>
long long combination(long long m,long long n);
int main()
{
    long long m,n;
    scanf("%lld %lld",&m,&n);
    if(n>=m)
    {
            printf("1");
    }
    
    else
    {
        if(n!=0&&m!=0)
            printf("%lld",combination(m,n));
        if(n==0&&m!=0)
            printf("0");
    }
}

long long combination(long long m,long long n)
{
    long long i=m,product=1;
    if(n>(2*m))
    {
        while(i>(m-n))
        {
            product*=i;
            i--;
        }
        i=1;
        while(i<=n)
        {
            product/=i;
            i++;
        }
    }
    else
    {
        while(i>n)
        {
            product*=i;
            i--;
        }
        i=1;
        while (i<=(m-n))
        {
            product/=i;
            i++;
        }
    }
    return product;
}