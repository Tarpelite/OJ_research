#include<stdio.h>

int main()
{
	int num[100000]={0};
	int n;
	int k,flag=0;
	scanf("%d",&n); 
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&k);
		num[k]++;
		if(flag<k) flag=k; 
	}	
	scanf("%d",&k);
	while(flag--)
	{
		if(num[flag]) 
		{
			k--;
			if(k==1)
			{
				printf("%d %d",flag,num[flag]);
				break;
			}
		}
	}
	return 0;
}