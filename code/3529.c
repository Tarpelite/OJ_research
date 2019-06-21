#include <stdio.h>

long long ha(int n){
	long long s = 1;
	int i;
	for(i = 1; i <= n; i++){
		s *= i;
	}
	return s;
}

long long ha2(int m, int n){
	long long s = 1;
	int i;
	for(i = m; i <= n; i++){
		s *= i;
	}
	return s;
}

long long c(int m, int n){
	if(m <= n) return 1;
	if(n == 0) return 1;
	return ha2(m-n + 1, m) / ha(n);
} 

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d",c(m,n));
}