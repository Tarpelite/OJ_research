#include<stdio.h>
int isPrime(int x)
{
    int i;
    for(i=3;i<x;i++)
    {
        if(x%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while(isPrime(n))
        n=n+1;
    printf("%d",n);
    return 0;
}