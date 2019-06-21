#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int a(long long int x);
int main() 
{
	long long int m,n;
	scanf("%lld%lld",&m,&n);
	if(m==0||n==0)
	printf("0");
	else
	{	
	long long int l;
	l=a(m)/(a(n)*a(m-n));
	printf("%lld",l);
	}
	return 0;
}
long long int a(long long int x)
{
    long long int i=1,j=1;
    for(i;i<=x;++i)
        j*=i;
    return j;
}