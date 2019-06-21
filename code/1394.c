#include <stdio.h>
#include <math.h>
int main()
{
	int x, i, gcd=1;
	scanf("%d", &x);
	while(1)
	{
		x++;
		gcd=1;
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			   gcd=i; 
		}
		if(gcd==1)
		break;
	}
	printf("%d", x);
	return 0;
}