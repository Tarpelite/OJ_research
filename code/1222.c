#include <stdio.h>
int main()
{
	int n, i, x, k, t=0;
	scanf("%d", &n);
	int a[1000000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d", &x);
		a[x]++;
	}	
	scanf("%d", &k);
	for(i=1000000-1;i>=0;i--)
	{
		if(a[i]==0)
		    continue;
		t++;
		if(t==k)
		    break;
	}
	printf("%d %d", i, a[i]);
	return 0;
}