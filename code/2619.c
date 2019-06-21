#include<stdio.h>
#define N 100005
int main()
{
	int a[N]={0},n,k;
	scanf("%d",&n);
	while(n--)
	{
		int temp;
		scanf("%d",&temp);
		a[temp]++;
	}
	scanf("%d",&k);
	for (int i=N-1;i>=0;i--)
	{
		if (a[i]>0)
		{
			k--;
		}
		if (k==0)
		{
			printf("%d %d\n",i,a[i]);
			break;
		}
	}
	return 0;
}