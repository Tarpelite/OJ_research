#include<stdio.h>
#include<math.h>
int main()
{
	int finder(long long x);
	long long a;
	scanf("%lld",&a);
	while(a>0)
	{
		a++;
		if(finder(a)==1){
			printf("%lld",a);break;
		}
	}
	return 0;
 } 
int finder(long long x)
{
	long long i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return(0);break;
		}
	}
	return(1);
}