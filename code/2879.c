#include<stdio.h>

int main()
{
	int b,i,k,j,min,index,n,sum=0,s[100005]={};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		s[b]++;
	}
	scanf("%d",&k);
	for(j=0,i=100000;j<k;i--)
	{
		if(s[i]!=0)
		{
			j++;
		}
	}
	
	
	printf("%d %d",i+1,s[i+1]);
	return 0; 
}