#include<stdio.h>
int main()
{
	int m,n;
	int C=1;
	int i=1;
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
	{
		C=(C*(m-n+i))/i;
	}
	printf("%d",C);
	return 0;

	
}