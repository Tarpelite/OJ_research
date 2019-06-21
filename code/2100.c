#include<stdio.h>
int zhishu(int n);
int main()
{
	int n,m=0,i;
	scanf("%d",&n);
	for(i=n+1;m!=1;i++)
		m=zhishu(i);
	printf("%d",i-1);
	return 0;
}
int zhishu(int n)
{
	int m;
	if(n==1||n==2||n==3)
		return 1;
	else if(n%2==0)
		return 0;
	else
	{
		for(int i=2;i<n;i++)
			{
				if(n%i!=0)
					m=1;
				else
					return 0;
				}
		if(m==1)
			return 1;
		else
			return 0;
	}
}