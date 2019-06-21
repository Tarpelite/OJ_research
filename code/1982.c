#include <stdio.h>
int isprime(int n)
{
    int res=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res=0;
            break;
        }
    }
    return res;
}

int main ()
{
    int n;
    scanf("%d",&n);
    n++;
    while(!isprime(n))
    {
        n++;
    }
    printf("%d",n);
    return 0;
}