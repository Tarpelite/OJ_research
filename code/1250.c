#include<stdio.h>
#define MAX_N 100000
int a[MAX_N + 5];
int main()
{
	int n,k,max=0,min=MAX_N,i;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		a[k]++;
		if(k<min)min=k;
		if(k>max)max=k;
	}
	scanf("%d",&k);
	for(i=max;i>=min;i--)
	{
		if(a[i]>0)k--;
		if (0==k) break;
	}
	printf("%d %d",i,a[i]);
	return 0;
}