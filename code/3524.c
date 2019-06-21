#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,q;
	scanf("%d",&n);
	q=n+1;
	while(1)
	{
		i=2;
		while(i<=sqrt(q))
	    {
		    if(q%i==0)
		    {
			    i=q+1;
		    }
		    else
		    {
			    i++;
		    }
	    }
	    if(i!=q+1)
	    break;
	    q++;
	}
	printf("%d",q);
	return 0;
}