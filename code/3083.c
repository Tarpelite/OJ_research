#include<stdio.h>
#include<math.h>
int j(int x)
{
	int i;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)	return 0;
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(1)
	{
		if(j(++n))
		{
			printf("%d",n);
			return 0;
		}
	}
}