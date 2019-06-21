#include<stdio.h>

int checkzhishu(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}


int main()
{
	int n;
	scanf("%d",&n);
	
	n++;
	while(checkzhishu(n)==0)
		n++;
	
	printf("%d",n);
	
	
	
	return 0;
}