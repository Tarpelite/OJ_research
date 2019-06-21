#include <stdio.h>
#include <stdlib.h>

long long jiecheng(int n);

int main()
{
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	printf("%lld", jiecheng(m) / jiecheng(m - n) / jiecheng(n));
	
	return 0; 
}

long long jiecheng(int n)
{
	long long ans = 1;
	
	for(int i = 1; i <= n; i++)
	{
		ans *= i;
	}
	
	return ans;
}