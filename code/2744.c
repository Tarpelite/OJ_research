#include<stdio.h>
int main()
{
	int m,n,up=1,down=1;
	scanf("%d %d",&m,&n);
	for(int i=1;i<=n;i++)
	{
		down*=i;
	}
	for(int i=0;i<n;i++)
	{
		up*=m-i;
	}
	printf("%d\n",up/down);
	return 0;
}