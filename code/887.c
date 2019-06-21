#include<stdio.h>
int main()
{
	int m,n,i,sumx,sumy,sum;
	scanf("%d %d",&m,&n);
	sumx=1;
	sumy=1;
	if(n==m)
	{
		sum=1;
	}
	
	else
	{
		for(i=0;i<n;i++)
		{
			sumx=sumx*(m-i);
			sumy=sumy*(i+1);
		}
	}
	sum=sumx/sumy;
	printf("%d\n",sum);
	return 0;
	
}