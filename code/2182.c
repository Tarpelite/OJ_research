#include<stdio.h>
int main()
{
	long long n, m, i, ans = 1;
	scanf("%lld %lld", &m, &n);
	if(m == 0)
	{
		printf("0");
		return 0;
	}
	for(i = n + 1;i <= m; i++)
	{
		ans *= i;
	}
	for(i = 1; i <= m - n; i++){
		ans /= i;
	}
	printf("%lld",ans);
}