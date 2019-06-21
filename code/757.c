#include<stdio.h>
#include<math.h> 
int main()
{
	long long k,i;
	long long n=2;
	scanf("%lld",&k);
	{ 
	for(i=k+1;i<100005;i++)
	{   
	    n=2;
		while(i%n!=0)
	 {
		n++;
	 }
	    if(n>sqrt(i))
	 {
	    printf("%lld",i);
	    break;
	 }
	}
  
	}

	return 0;
}