#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m,n,f=1,h=1,i;
   scanf("%d%d",&m,&n);
   for(f=1,i=m;i>(m-n);i--)
    f*=i;
   for(h=1;n>0;n--)
    h*=n;
   printf("%d",f/h);
    return 0;
}