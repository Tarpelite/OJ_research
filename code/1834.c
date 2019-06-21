#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long c(int m,int n);
int main() 
{
    int m,n;long long p;
    scanf("%d%d",&m,&n);
    p=c(m,n);
    printf("%lld",p);
	return 0;
}

long long c(int m,int n)
{
	if(n==1)
	   return m;
	if(m==1)
	   return 1;
	if(n==m)
	   return 1;
	return c(m-1,n)+c(m-1,n-1);
}