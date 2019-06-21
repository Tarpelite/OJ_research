#include<stdio.h>
long long zhishu(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",zhishu(n));
	return 0;
}
long long zhishu(int x)
{
	int i=2;
	int m;
	m=x+1;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			m++;
			i=2;
		}
	}
	return m;
}