#include <stdio.h>
int main()
{
	int n,m,k,x=1;
	scanf("%d%d",&n,&m);
	for(k=1;k<=m;k++)
	{
		x=x*(n-k+1)/k;
	}
	printf("%d",x);
	return 0;
}