#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int result;
	int a = 1, b = 1;
	int i;
	
	int t1 = m;
	
	for(i = 0; i < n; i ++){
		a *= t1; t1 --;
		b *= i + 1;
	}
	
	result = a / b;
	printf("%d\n", result);
	
	return 0;
}