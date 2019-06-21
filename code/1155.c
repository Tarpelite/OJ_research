#include<stdio.h>

int main()
{
	int n,flag=1,ans,i;
	
	scanf("%d",&n);
	ans=n;
	
	while(flag)
	{
		ans++;
		i=2;
		while(i<ans)
		{
			if((ans%i)==0)
			{
				break;
			}
			else
			{
				i++;
			}
		}
		if(i==ans)
		{
			flag-=1;
		}
	}
	printf("%d",ans);
	
	return 0;
}