#include <stdio.h>


int main()
{  int n,i,m,b;
   scanf("%d",&n);
   m=n+1;
   b=1;
   while (b)
   {
       for(i=2;i<m;i++)
      {
          b=m%i;
          if(b==0)
          break;
      }
      if(b!=0)
        break ;
      b=1;
      m=m+1;
   }
   printf("%d",m);
    return 0;
}