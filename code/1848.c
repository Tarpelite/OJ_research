#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
    long long n,next;
    scanf("%lld",&n);
    next=n+1;
    while(next<=1000000)
    {
    	long long c=2;
    	while(next%c!=0)
        {
    	   c=c+1;
	    }
	    if(c==next)
	       break;
	    else
	       next++;
	}
	printf("%lld",next);
	return 0;
}