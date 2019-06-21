#include<stdio.h>
long long fact(int);
int main()
{
		long long i,m,n;
		long long n1,m1,o1;
		scanf("%lld%lld",&n,&m);
		n1=fact(n);
		m1=fact(m);
		o1=fact(n-m);
		printf("%lld",n1/(m1*o1));
		
 } 
 	long long  fact(int n)
 	{
 		long long i;
 		long long p;
 		p=1;
 		for(i=1;i<=n;i++){
 			p=p*i;
		 } 
		 return p;
	 }