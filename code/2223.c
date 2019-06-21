#include <stdio.h>
int main() 
{
	int c, m, n, a, b, i;
	scanf("%d%d",&m,&n);
	a=1,b=1;
	if (n>=m-n)
		n=m-n;
	else
		n=n;
	if(n==0)
		c=1;
	for (int i=m; i>=m-n+1; i--)
		a=a*i;
	for (int i=1; i<=n; i++)
		b=b*i;
	    c=a/b;
	printf("%d",c);
	return 0;
}