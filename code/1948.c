#include <stdio.h>
int main ()
{
	int n,i;
	scanf("%d",&n);
	for (n=n+1;1;n++)
	{
		for (i=2;i<=n;i++)
		{
			if (n%i==0)
			break;
		}
		if (i==n)
		{
			printf("%d",n);
			return 0;
		}
	}
	return 0;
}