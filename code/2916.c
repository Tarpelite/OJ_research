#include<stdio.h>
int prime(int);
int main()
{
 int n,y;
 scanf("%d",&n);
 for(int i=1;i>0;i++)
  if(prime(n+i))
    {y=n+i;break;}
 printf("%d",y);
 return 0;
 }
 int prime(int x)
 {
   int i=2;
   for(i=2;i<x;i++)
   {
    if(x%i==0)
     return 0;
     }
     return 1;
 }