#include <stdio.h>
int A[100010];
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int a;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		A[a]+=1;
	}
	int k;
	int count=0;
	scanf("%d",&k);
	int xun;
	for(xun=100000;xun>=0;xun--)
	{
		if(A[xun]!=0)
		{
			count++;
		}
		if(count==k)
		{
			printf("%d %d",xun,A[xun]);
			break;
		}
	}
	return 0;
}