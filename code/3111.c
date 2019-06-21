#include<stdio.h>
int main()
{
	unsigned int num[100001]={0};
	int m,n,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		++num[m];
	}
	scanf("%d",&k);
	for(i=100000;i>=0;--i)
	{
		if(num[i]!=0)
		k--;
		if(k<=0)
		{
			printf("%d %u\n",i,num[i]);
			break;
		}
	}
	return 0;
}