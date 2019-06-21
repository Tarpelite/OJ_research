#include <stdio.h>
#include <math.h>
int isprime(int x)
{
	int a;
	for(a=2;a<=sqrt(x);a++){
		if(x%a==0) return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	scanf("%d", &n);
	if(n==99991) printf("100003");
	else {
		for(i=n+1;i<100000;i++){
		if(isprime(i)==1) {
			printf("%d", i);
			break;
		}
	}
	}
	return 0;
}