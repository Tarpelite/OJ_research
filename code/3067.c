#include <stdio.h>

int main()
{
	long m,n,b=1,c=1,i;
	double a=1;
	scanf("%ld%ld",&m,&n);
	if (n>m/2) n=m-n;
	if(n>m)
		printf("%d",1);
	else
	{for(i=0;i<=n-1;i++)
	  a*=(m-i)/(double)(i+1);

      printf("%.0f",a);

	}
	return 0;
}