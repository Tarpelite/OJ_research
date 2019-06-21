#include <stdio.h>
long long dev(int);
int main()
{
	int m, n, c;
	scanf("%d%d", &m, &n);
	if(n == 0){
		puts("0");
		return 0;
	}
	c = dev(m) / (dev(n) * dev(m - n));
	printf("%d\n", c);
	return 0;
}

long long dev(int x)
{
	if(x == 0)
	   return 1;
	return dev(x - 1) * x;
}