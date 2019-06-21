#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int zs (int n)
{
   int i=2;
   while(i<n)
   {
       if(n%i==0)
        break;
      i++;
   }
   if(i==n)
     return 1;
   else
     return 0;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    b=a+1;
    while(1)
       {
           if(zs(b)==1)
            break;
           else
            b++;
       }
    printf("%d",b);
    return 0;
}