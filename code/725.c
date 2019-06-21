#include <stdio.h>
int main()
{
   int n,j,i,count;
   scanf("%d",&n);
   for(i=n+1;i<10000000;i++)
   {
       for(count=0,j=2;j<i;j++)
      {
       if(i%j==0)
        count++;
        }
      if(count==0)
        {printf("%d",i);
        break;}}

      ;
      return 0;
      }