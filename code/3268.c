#include<stdio.h>
#include<string.h> 
int main()

{
	int n,i,mod,sum=0,sum1;
	scanf("%d",&n);
	i=n+1;
	for (i=n+1;i<=100004;i++)
	{
		for (int j=2;j<i;j++)
		{
			mod=i%j;
			if(mod==0)
			sum1=1;
			if (mod!=0)
			sum1=0;
			sum=sum+sum1;
		}
		if (sum==0)
		{
			printf("%d",i);
			break;
		}
		sum=0;
	}
	return 0;
}