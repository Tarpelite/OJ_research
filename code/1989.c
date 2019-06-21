#include <stdio.h>
int main ()
{
	int m,n;
	long long a=1,b=1,c=1;
	scanf("%d %d",&m,&n);
	if (m>=0&&m<=20&n>=0&&n<=20)
	{
		if (n==0)
		a=1;
		else
		{
		for (int i=1;i<=n;i++)
		{
			a=a*i;
		}
	    }
	    if (m==0)
	    b=1;
	    else
	    {
		for (int i=1;i<=m;i++)
		{
			b=b*i;
		}
	    }
	    if (m==n)
	    c=1;
	    else
	    {
		for (int i=1;i<=(m-n);i++)
		{
			c=c*i;
		}
	    }
	}
	printf("%d",b/(a*c));
	return 0;
 } 
 // m!/(n!*(m-n)!)