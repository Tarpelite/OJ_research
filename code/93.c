#include<stdio.h>
int main()
{
   long long m,p=1,q=1,z=1,w,i;
   int n;
   scanf("%lld%d",&m,&n);
   for(i=1;i<=m;i++)
     p=p*i;
   for(i=1;i<=n;i++)
     q=q*i;
   for(i=1;i<=m-n;i++)
    z=z*i;
   w=p/q/z;
   printf("%lld",w);
   return 0;
}