#include<stdio.h>
int a[100001]={0};
int main()
{
	int n,x;
	int i;
	int num;
	int cnt = 0;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{
		scanf("%d",&num); 
		if(a[num] > 0) a[num]++;
		else a[num] = 1;
	}
	scanf("%d",&x);
	for(i = 100001;i>=0;i--)
	{
		if(a[i] != 0) cnt++;
		if(cnt == x)
		{
			printf("%d %d",i,a[i]);
			return 0;
		}
	}
 }