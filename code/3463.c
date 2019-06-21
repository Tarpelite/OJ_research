#include<stdio.h>
int check(int n)
{
	int i,m=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			m=0;
			break;
		}
	}
	return m;
}

int main()
{
	int n,j=0;
	scanf("%d",&n);
	for(j=0;j==0;)
	{
		n=n+1;
		j=check(n);
	}
	printf("%d",n);
	return 0;
}