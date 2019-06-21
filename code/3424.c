#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   int prime=0;
   scanf("%d",&n);

   while(prime==0)
   {
       prime=1;
       n=n+1;
       for(i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
               prime=0;
               break;
           }
       }

   }
printf("%d",n);
return 0;}