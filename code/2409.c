#include <stdio.h>
int prime(int x);
int main()
{
	int n,i;
	scanf("%d",&n);
	while(1)
	{
		n++;
		if(prime(n)==1) break;
	}
	printf("%d",n);
	return 0;
}
int prime(int x)
{
	int i,s;
	for(i=x-1;i>=2;i--)
	{
		s=x%i;
		if(s==0) break;
	}
		if(s==0) return 0;
		else return 1;
}