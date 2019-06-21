#include<stdio.h>
int main()
{
	int jud(long long n);
	long long a;
	scanf("%lld",&a);
	while(a>0)
	{
		a++;
		if(jud(a)==1){
			printf("%lld",a);break;
		}
	}
	return 0;
 } 
int jud(long long n)
{
	long long i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return(0);break;
		}
	}
	return(1);
}