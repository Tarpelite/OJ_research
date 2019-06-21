#include <stdio.h>

int main()
{
	unsigned int m,n,i,a=1,b=1,answer;
	
	scanf("%u%u",&m,&n);
	
	for(i=m-n+1;i<=m;i++)
		a*=i;
	for(i=1;i<=n;i++)
		b*=i;
	answer=a/b;
	printf("%u",answer);
	
	return 0;
}