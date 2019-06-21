#include<stdio.h>

int check(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	while(!check(++n));
	printf("%d\n",n);

	return 0;
}