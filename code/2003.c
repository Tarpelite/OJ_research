#include<stdio.h>
#include<math.h>
 int main()
 {
     int n,i,j,flag,m;
     scanf("%d",&n);
     m=0;
     for(i=n+1;m<1;i++)
     {
         flag=0;
         for(j=2;j<i;j++)
         {

             if(i%j==0)
             {
                 flag++;
             }
         }
         if(flag==0)
            {
                m++;
            }



     }
     printf("%d",i-1);
     return 0;
 }