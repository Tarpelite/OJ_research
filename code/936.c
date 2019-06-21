#include<stdio.h>
int main()
{
     int a,i=2,j=0;
     scanf("%d",&a);
     a++;
     while(a<500000)
     {
          while((a%i)!=0)
          {
               i++;
               if(a==i)
               {
                    j=1;
                    break;
               }
          }
          if(j==1)
               break;
          else
          {
               i=2;
               a++;
          }
     }
     printf("%d",a);

     return 0;

}