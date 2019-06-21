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
	scanf("%d %d", &n, &m);
	if(m==0||n==0)
        printf("0");
	else {count = factorial(m, n);
	printf("%lld", count);}
}