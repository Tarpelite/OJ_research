#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,n;
    scanf("%d",&a);
   while (1)
   {
       for (i=a+1;i<a*a;i++)
       {
           for (j=2;j<=a*a;j++)
       {
           n=j;
           if (i%j==0)
            break;

       }
       if (n==i)
       {
           printf("%d",i);
           break;
       }

       }

  break;
   }

    return 0;
}