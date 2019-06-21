#include<stdio.h>
int main()
{
	int sum=1;
	int m,n,k;
	scanf("%d %d",&m,&n);
	if( m>0 && n>0 && m>=n )
	{
		for(k=1;k<=n;k++)
			sum=(sum*(m-n+k))/k;
		printf("%d",sum);
	}
	else
	    printf("0");
	return 0;
}