#include<stdio.h>
int main()
{
   int n,i,m,k=0,j=1;
   scanf("%d",&n);
   m=n;
   while(j!=0)
   {m=m+1;j=0;
   for(i=2;i<m;i++)
   {
       k=m%i;
       if(k==0)
       j++;
   }
   }
   printf("%d",m);
}