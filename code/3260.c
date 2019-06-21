#include <stdio.h>
int a[200000];
int main()
{
	int n,p;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p);
		a[p]++;
	}
	int i=100000;
	int k;
	scanf("%d",&k);
	int flag=0;
	while(flag<k-1)
	{
		if(a[i]!=0) flag++;
		i--;
	}
	printf("%d %d",i,a[i]);
	return 0;
}