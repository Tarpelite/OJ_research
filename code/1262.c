#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n+1;i<=100009;i++)
	{
		j=2;
		while(i%j!=0)
		{
		j++;
		}
		if(j==i)
		{
		printf("%d",i);
		break;
		}
	}
	return 0; 
 }