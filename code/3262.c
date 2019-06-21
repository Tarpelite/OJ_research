#include<stdio.h>
int main()
{
	int num[100001]={0};
	int n,x,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		num[x]++;
	}
	scanf("%d",&k);
	for(i=100000;i>=0;i--)
	{
		if(num[i]!=0)
		k--;
		if(k<=0)
		{
			printf("%d %d\n",i,num[i]);
			break;
		}
	}
	return 0;
}