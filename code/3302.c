#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int t=1;
	int i;
	if(n==0||m==0)
	{
		printf("1");
	}
	else 
	{
		for(i=m;i>m-n;i--)
	  {
		t*=i;
	}
	for(i=1;i<=n;i++)
	{
		t=t/i;
	}
	printf("%d",t);
	}
	return 0;
	
}