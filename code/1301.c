#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long  jc (long long  a)
{
  long long  b=a;
   if(a==0)
    return 1;
   else
   {
       while(a>1)
     {
       b=b*(a-1);
       a--;
     }
   return b;
   }
}
int main()
{
    long long  m,n,p;
    scanf("%lld%lld",&m,&n);
    p=jc(m)/(jc(n)*jc(m-n));
    printf("%lld",p);

    return 0;
}