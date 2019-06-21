#include <stdio.h>
#include <string.h>
int main()
{
   int n,p,i,j;
   scanf("%d",&n);
   for(i=n+1;i<1000000;i++)
   {
       for(j=2,p=0;j<i;j++)
       {
           if(i%j==0)
           {
               p=1;
           }
       }
       if(p==0)
       {
           printf("%d",i);
           break;
       }
   }

return 0;
}