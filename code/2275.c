#include<stdio.h>
int a[100010];
int main(void)
{
	int n,i,k,t,num=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
		if(a[t]==1)num++;
	}
	
	scanf("%d",&k);
	i=1;
	t=0;
	for(i=1,t=0;t<=num-k+1;i++)
	{
		if(a[i]!=0)
		{
			t++;
		}
		if(t==num-k+1)
		{
			printf("%d %d",i,a[i]);
			break;
		}
		
	}
}