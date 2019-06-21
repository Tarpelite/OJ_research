#include<stdio.h>
long D(long x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*D(x-1);
    }
}
int main()
{
    long m,n,sum;
    int i= 1;
    scanf("%ld%ld",&m,&n);
    if ( m == n)
    {
        printf("1");
    }
    else if(m==0)
    {
        printf("0");
    }
    else if(n==0)
    {
        printf("0");
    }
    else
    {
    sum = D(m)/(D(n)*D(m-n));
    printf("%ld",sum);
    }
return 0;
}