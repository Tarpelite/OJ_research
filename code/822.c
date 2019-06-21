#include <stdio.h>
int judge(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0) break;
	}
	if(i==n) return 1;
	else return 0;
}
int main()
{
	int ppuu;
	scanf("%d",&ppuu);
	int k=ppuu+1;
	while(1)
	{
		if(judge(k)==1)
		{
			printf("%d",k);
			return 0;
		}
		else k++;
	}
}