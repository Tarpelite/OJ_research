#include<stdio.h>
int main()
{
	int n,m,j,tap=1;
	scanf("%d",&n);
	for(m=n+1;tap>0;m++)
	{
		tap=0;
		for(j=2;j<m;j++)
		{
				if(m%j==0)
				tap++;
		}
	}
	printf("%d",m-1);
	return 0;
 }