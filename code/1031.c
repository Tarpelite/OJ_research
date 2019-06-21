#include <stdio.h>
#include <stdlib.h>
int sushu(int n) {
	int i,r;
	for (i = 2; i <= n - 1; i++) {
		r = n % i;
		if (r == 0)
			break;
	}
	if (i >= n)
		return 1;
	else
		return 0;
}


int main(void) {
	int m;
	scanf("%d",&m);
	m=m+1;
	while(sushu(m)==0)
m++;
printf("%d",m);
	return 0;}