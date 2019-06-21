#include <stdio.h>
#include <math.h>
long long jc(int);
main()
{
	int m, n;
	long long ans;
	scanf("%d %d", &m, &n);
	ans = jc(m) / (jc(n) * jc(m - n));
	//printf("%lld %lld %lld\n", jc(m), jc(m - n), jc(n));
	printf("%lld", ans);
}

long long jc(int a)
{
	long long ans = 1;
	for(int i = 1; i <= a; i++){
		ans *= i;
	}
	return ans;
}