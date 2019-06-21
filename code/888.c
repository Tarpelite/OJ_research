#include<stdio.h>
int main()
{
	int a,i,j,k=0;
	int p[100000];
	scanf("%d",&a);
	for(i=a+1;k==0;i++)
	{
		for(j=i-1;j>1;j--)
		{
			k=i%j;
			if(k==0)
			break;
		}
		
	}
	printf("%d",i-1);
	return 0;
	
}