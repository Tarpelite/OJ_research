#include<stdio.h>
int isprime(int a)
{
    int i;
    if(a==1)
        return 0;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(1)
    {
        if(isprime(n+i))
        {
            printf("%d",n+i);
            break;
        }
        i++;
    }
    return 0;
}