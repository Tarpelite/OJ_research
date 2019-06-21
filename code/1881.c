#include <stdio.h>
int f( int a, int b)
{
     if ( b == 1)
	return a;
	if (a == b)
	return 1;
	
	return f( a-1, b) + f( a-1, b-1);
	
	}
	int main ()
	{
		
		int a, b, c;
		scanf("%d%d", &a, &b);
		c = f( a, b);
		printf("%d", c);
		return 0;
	
		
	}