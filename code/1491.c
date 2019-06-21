#include <stdio.h>
int zuhe(int a,int b)
{
	if(a==b||b==0)
	return 1;
	return zuhe(a-1,b)+zuhe(a-1,b-1);
}
int main ()
{
	long long int m,n,k;
	scanf("%lld%lld",&m,&n);
	k=zuhe(m,n);
	printf("%lld",k);
	return 0;
}