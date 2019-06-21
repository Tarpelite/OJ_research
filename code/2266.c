#include <stdio.h>
int main()
{
	int arr[105];
	int n,K;
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int qi,zh;
	int x,y;
	for(int i=0;i<K;i++)
	{
		scanf("%d%d",&qi,&zh);
		int sum=0,start=1;		
		for(int k=qi;k<=zh;k++)
		{
			sum+=arr[k];
			start*=arr[k];
			start%=n;
		}
		x=sum%n;
		y=start;
		if(x>y)
		{
			int swap=x;
			x=y;
			y=swap;
		}
		int m=arr[x];
		for(int k=x+1;k<=y;k++)
		{
			m^=arr[k];
		}
		printf("%d\n",m);
	}

	return 0;
}