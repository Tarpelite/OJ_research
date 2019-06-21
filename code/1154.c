#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i=1,s,c=1;
	s=m;
	while(i<n)
	{
		m--;
		s*=m;
		i++;
	}
	i=1;
	while(i<=n)
	{
		c*=i;
		i++;
	}
	printf("%d",s/c); 
	return 0;
}