#include<stdio.h>
int main()
{
	int m,n,i,q;
	int k=1,sum=1;
	scanf("%d%d",&m,&n);
	for( i=1;i<=n;i++)
		k*=i;
	i=1;
	while(i<=n)
	{
		sum*=m;
		m--;
		i++;
	}
	q=sum/k;
	printf("%d",q);
	return 0;
	
 }