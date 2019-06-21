#include<stdio.h>
int zhi(int); 
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=n+1;i<=100010;i++)
	{
		if(zhi(i)==1)
		break;
	}
	printf("%d",i);	
	return 0;
}
int zhi(int i)
{
	int j;
	for(j=i-1;j>1;j--)
	{if(i%j==0)
	return 3;
	}
	
	
	return 1;
}