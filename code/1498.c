#include<stdio.h>
int main()
{
	int a;
	int n,m;
	int i=0;
	scanf("%d",&n);
	n=n+1;
	do
	{
		a=0;
		for(i=n-1;i>1;i--)
		{
			m=n%i;
			if(m==0)
			{
				a++;
				break;
			}
		}
		if(a==0)
		{
			printf("%d",n);
		}
		else
		n++;
	}while(a);
	return 0;
}