#include<stdio.h>
int a[10000001]={0};
int main()
{
	int n,k;
	int num;
	int i;
	int count_k=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		a[num]++;
	}
	scanf("%d",&k);
	for(i=10000000;;i--)
	{
		if(a[i]!=0)
		{
			count_k++;
			if(count_k==k)
			{
				t=i;
				break;
			}
		}
		
	}
	printf("%d %d",t,a[t]);
	return 0;
}