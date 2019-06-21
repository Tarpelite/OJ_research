#include<stdio.h>

	int judgePrime(int n)
	 { 
	 if (n == 2) { return 1; } 
	 if (n < 2 || n % 2 == 0) { return 0; } 
	 int i;
	  for (i = 3; i * i <= n; ++ i)
	   { if (n % i == 0)
	    { return 0; }
		 } return 1;
		  }
		  int main()
{
	int m,k,i;
	scanf("%d",&k);
	for(m=k+1;m<=2*k;m++)
	{
		if(judgePrime(m))
		{
			printf("%d",m);
			break;
		}
	}
	return 0;
}