#include<stdio.h>
int sum(long long m,long long n)
{
 if(n==m||n==0)
  return 1;
 if(n==1)
  return m;
 else
  return sum(m-1,n)+sum(m-1,n-1);
  
}
int main()
{
 long long m,n;
 scanf("%lld",&m);
 scanf("%lld",&n);
 long long t=sum(m,n);
 printf("%lld",t);
 return 0;
}