#include<stdio.h>
long long  f(long long  n);
int main()
{
	long long  n,m;
	long long  n1,m1,o1;
	scanf("%lld %lld",&m,&n);
	n1=f(m);
	m1=f(n);
	o1=f(m-n);
	printf("%lld",n1/(m1*o1));
 }
 long long  f(long long  n)
 {
 	int i;
 	long long  p=1;
 	for (i=1;i<=n;i++)
 	{
 		p=p*i;
	 }
	 return p;
  }