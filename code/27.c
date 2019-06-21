#include<stdio.h>
#include<math.h>
int n;
int slove(int n)
{
	int k=sqrt(n*1.0),a=1;
	for(int i=2;i<=k;i++)
		if(n%i==0)
		{
			a=0;
			break;
		}
	return a;
}
int main()
{
	scanf("%d",&n);
	while(1)
	{
		if(slove(++n))
		{
			printf("%d",n);
			break;
		}
	}
	return 0;
}