#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	i=n+1;
	while(i<=100100) 
	{
		int k,s=1;
		if(i==2)
			break;
		for(k=2;k<i;k++)
		{
			if(i%k==0)
			{
				s=0;
				break;
			}	
		}
		if(s)
			break;
		i++;
	}
	printf("%d",i);
	return 0;
}