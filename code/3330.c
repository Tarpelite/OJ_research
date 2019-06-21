#include<stdio.h>
int prime(int x)
{
    long long int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    long long int n,x,i;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        x=n+i;
        if(prime(x))
            break;

    }
   printf("%d",x);
return 0;
}