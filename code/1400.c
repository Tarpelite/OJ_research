#include<stdio.h>
#define N 100005
int v[N];
int main()
{
	int n,k;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		v[a]++;
		
	}
	scanf("%d",&k);
	for(int i=N-1; i>=0; i--)
	{
		k -= (v[i] > 0);
		if(k<=0)
		{
			printf("%d %d",i,v[i]);
			return 0;
		}
	}
	
	return 0;
}