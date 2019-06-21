#include <stdio.h>
int a_1[100100];
int main()
{
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		a_1[k]+=1;
	}
	int m, j=0;
	scanf("%d",&m);
	int x;
	for(x=100000;x>=0;x--)
	{
		if(a_1[x]!=0)
		{
			j++;
		}
		if(j==m)
		{
			printf("%d %d",x,a_1[x]);
			break;
		}
	}
	return 0;
}