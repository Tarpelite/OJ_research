#include<stdio.h>
unsigned long factorial(unsigned long);
int main()
{
    int m,n,method;
   scanf("%d%d",&m,&n);
   if(n==0)printf("0");
   else {
   method=factorial(m)/factorial(m-n)/factorial(n);
   printf("%d",method);}
   return 0;
}
unsigned long factorial(unsigned long n)
{ if (n <= 1)return 1;
return n * factorial(n-1);
}