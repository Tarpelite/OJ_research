#include <stdio.h>
 
long long factorial(int m, int n)
{
	long long ans = 1;
	if(m < n-m) m = n-m;
	for(int i = m+1; i <= n; i++) ans *= i;
	for(int j = 1; j <= n - m; j++) ans /= j;
	return ans;
	  
}
 
int main()
{
	int m, n;
	long long count = 0;
	scanf("%d %d", &m, &n);
	count = factorial(n, m);
	printf("%d", count);
}