#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,f=0;
	scanf("%d",&n);
	while (f==0)
	{
		n++;
		f=1;
		for (i=2;i<=sqrt(n);i++)	if (n%i==0)	{f=0;	break;}
	}
	printf("%d\n",n);
	return 0;
}