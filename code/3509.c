#include <stdio.h>
int main()
{
	int m,n,i,j,k,x;
	scanf("%d%d",&m,&n);
	i=m-1;
	x=m;
	while(i>=(x-n+1))
	{
		m=m*i;
		i--;
	}
	j=n-1;
	while(j>=1)
	{
		n=n*j;
		j--;
	}
	k=m/n;
	printf("%d",k);
	return 0;
}