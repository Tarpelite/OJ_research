#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n,m,a=1,b=1;
	scanf("%d%d",&m,&n);
	while(n>0)
	{
		b=b*n;
		a=a*m;
		n--;
		m--;
	}
	printf("%d",a/b);
	return 0;
}