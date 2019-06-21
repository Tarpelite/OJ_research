#include <stdio.h>
#define N 100001 //投票箱原理，把每个数当成一个投票箱 
int A[N];
int main()
{
	int n,k,a,kth;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		A[a]++;
	}
	scanf("%d",&k);
	int i=1,j=100000;
	while(i<=k)
	{
		if(A[j]!=0)
		{
			kth=j;
			i++;
		}
		j--;
	}
	printf("%d %d",kth,A[kth]);
	return 0;
}