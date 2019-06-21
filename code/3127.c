#include <stdio.h>
#include <math.h>
#include <string.h>
long long combination (long long a,long long b)
{
	long long  i=0,num=1; 
	if (b==0)
		return 1;
	else
	{
		for (i=0;i<=b-1;i++)
		{
			num=num*(a-i)/(i+1); 
		 } 
	return num; 
	 } 
    
 } 
int main ()
{
	long long m=0,n=0,i=0;
	scanf ("%lld%lld",&m,&n);
	m=combination(m,n);
	printf ("%lld",m);
	return 0; 
 }