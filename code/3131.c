#include<stdio.h>

int main()
{
	int n,i,j,k=1;
	scanf("%d",&n);
	if(n==1)
	printf("%d",2);
	else{
	for(i=n+1;k;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			} 
		}
		if(j==i)
		{
			k--;
		}
	}
	printf("%d",i-1);
    }
    return 0;
}