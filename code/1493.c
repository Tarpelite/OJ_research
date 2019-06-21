#include<stdio.h>
int main()
{
	int n,t,a[100000]={0},i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
	int max=1000000,m=0;
	i=99999;
	while(m<k)
	{
		if(a[i]!=0&&i<max)
		{
			max=i;
			m++;
		}
		i--;
	}
	printf("%d %d",max,a[max]);
	return 0;
}