#include <stdio.h>


int main()
{  int m,n,i,k;
  scanf("%d%d",&m,&n);
  k=1;
   for(i=1;i<=n;i++)
   {
       k*=m;
       k=k/i;
       m--;
   }
   printf("%d",k);
    return 0;
}