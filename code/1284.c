#include <stdio.h>
int a[100000];
int main()
{
	int n,j,t,k;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
	j=99999;
	while(k!=0)
	{
		if(a[j]!=0)
		{
			k--;
		}
		j--;		
	}
	printf("%d %d",j+1,a[j+1]);
	return 0;
}