#include<stdio.h>
int zone(int);
int main()
{
	int n,m,i;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		if(i==zone(i)||i==2)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
int zone(int g)
{
	int j,k=0;
	for(j=2;j<g;j++)
	{
		if(g%j==0)
		{
			k++;
		}
	}
	if(k==0)
		return g;
	else
		return 0;
}