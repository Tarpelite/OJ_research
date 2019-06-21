#include<stdio.h>
long long f(int);
int main()
{
 int m,n;
long long x;
 scanf("%d%d",&m,&n);
 x=f(m)/(f(n)*f(m-n));
 printf("%ld",x);
 return 0;
 }
 long long f(int x)
 {
     
  if(x==0)
    return 1;
  return x*f(x-1);
 }