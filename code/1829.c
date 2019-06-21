#include <stdio.h>
int a[100000];
int main()
{
	int n, i, x, k;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		a[x]++;
	}
	
	scanf("%d", &k);
	i = 99999;
	while(k != 0)
	{
		if(a[i] != 0)
		{
			k--;
		}
		i--;		
	}
	
	printf("%d %d", i + 1, a[i +1]);	
	
	return 0;
}