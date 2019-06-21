#include <stdio.h>
int mark[100000];
int num[100001];
int main()
{
	int n,i,j,k,in;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&in);
		++mark[in];
	}
	for(i=1,j=1;i<100000;i++)
	{
		if(mark[i])num[j++]=i;
	}
	scanf("%d",&k);
	printf("%d %d",num[j-k],mark[num[j-k]]);
	return 0;
}