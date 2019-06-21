#include <stdio.h>
#include <stdlib.h>

int fun(int n,int m)
{
   if(n<m) return 0;
   if(m==0||m==n)
     return 1;
   else
     return fun(n-1,m)+fun(n-1,m-1);
}
int main()
{
   int n,m;
   scanf("%d%d",&n,&m);
   printf("%d\n",fun(n,m));
   return 0;
}