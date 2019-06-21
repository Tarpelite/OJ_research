#include<stdio.h>
int isprime(int n)
{
    if(n==1) return 0;
    for(int now=2;now*now<=n;now++)
    {
        if(n%now==0)
            return 0;
    }
    return 1;
}
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=n+1;i!=0;i++)
   {
       if(isprime(i))
       {
           printf("%d",i);
           break;
       }
   }
}