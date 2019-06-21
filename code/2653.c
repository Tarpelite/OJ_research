#include<stdio.h>
long long int f(long long int);
long long int g(long long int);
long long int h(long long int);
int main()
{
	int m,n,p;
	unsigned x;
	scanf("%d%d",&m,&n);
	p=m-n;
	
	if(m==0)
		printf("1");
	else{
		x=(f(m)/g(p))/h(n);
		printf("%lld",x);
	}
	
	return 0;
 } 
 long long int f(long long int m)
 {
 	if(m==1)
 		return m;
 	else
 		return m*f(m-1);
  } 
 long long int g(long long int p)
 {
 	if(p<=1)
 		return 1;
 	else
 		return p*g(p-1);
 }
 long long int h(long long int n)
 {
 	if(n<=1)
 		return 1;
 	else 
 		return n*h(n-1) ;
 }