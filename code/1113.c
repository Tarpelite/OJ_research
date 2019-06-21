#include<stdio.h>
int x[100010]={0};
int main()
{
    int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		x[a]++;
	}
	int k;
	scanf("%d",&k);
	int p=0;
	for(int i=100000;i>=0;i--)
	{
		if(x[i]!=0)
		{
			p++;
		}
		if(p==k)
		{
		printf("%d %d",i,x[i]);
        break;
		}
	}
	return 0;
}