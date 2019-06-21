#include<stdio.h>
int main()
{
	int a, b[100000]={0}, i, j, cnt=0, k, n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		b[a]++;
	}
	scanf("%d", &k);
	for(i=99999;i>=0;i--)
	{
		if(b[i]!=0)
		{
			cnt++;
		}
		if(cnt==k)
		{
			break;
		}
	}
	printf("%d %d", i, b[i]);
	return 0;
}