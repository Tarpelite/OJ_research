#include<stdio.h>
int f(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	i=n+1;
	while(f(i)!=1)
	{
		i++;
	}
	printf("%d",i);
	return 0;
}

int f(int i)
{
	int s=0,j;
	for(j=1;j<i;j++)
	{
		if(i%j==0)
			s++;
	}
	if(s==1)
		return 1;
	else
		return 0;
}