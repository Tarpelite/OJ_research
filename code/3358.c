#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int zhishu(int n)
{
    int m,sum;
    for(m = 2;(double)m<=sqrt(n);m++)
    {
        if(n%m==0)
        {
            return 0;
        }


    }
    return 1;
}
 int main()
 {

     int n,i,m;
     scanf("%d",&n);
     if(n==0)
     {
         printf("2");
         return 0;
     }
     i=n+1;
     while(1)
     {
         if(zhishu(i))
         {
             printf("%d",i);
             return 0;
         }
         i++;

     }

 }