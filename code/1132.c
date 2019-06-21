#include <stdio.h>

int num[100];
int n;

int N(int l, int r){
	int sum = 0;
	int i;
	for(i = l; i <= r; i++){
		sum += num[i];
		sum %= n;
	}
	return sum;
}

int M(int l, int r){
	int s = 1;
	int i;
	for(i = l; i <= r; i++){
		s *= num[i];
		s %= n;
	}
	return s;
}

int H(int l, int r){
	int s = 0;
	int i;
	for(i = l; i <= r; i++){
		s ^= num[i];
	}
	return s;
}

int max(int l, int r){
	return l > r ? l : r;
}

int min(int l, int r){
	return l > r ? r : l;
}

int main(){
	int K;
	scanf("%d %d", &n, &K);
	int i;
	int l, r;
	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	for(i = 0; i < K; i++){
		scanf("%d %d", &l, &r);
		printf("%d\n", H(min(N(l,r),M(l,r)),max(N(l,r),M(l,r))));
	}
}