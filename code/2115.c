#include <stdio.h>
int isprime(int a)
{
    int y=0;
    for (int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            y=1;
            break;
        }
    }
    return y;
}
int main()
{
    int n;
    scanf("%d",&n);
    n++;
    while(isprime(n))
    {
        n++;
    }
    printf("%d",n);
    return 0;
}