#include <stdio.h>
int f(int x)
{
	int i=x-1,j=0;
	while(x%i!=0)
	{
		i--;
		j++;
	}
	if(j==x-2)
	return 1;
	else
	return 2;
	
}
int main()
{
	int n,flag;
	scanf("%d",&n);
	for(n++;;n++)
	{
		flag=f(n);
		if(flag==1)
		{
			printf("%d",n);
			return 0;
		}
	}
}