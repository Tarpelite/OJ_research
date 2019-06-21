#include<stdio.h>

int funN(int num[], int n, int l, int r){
	int i, sum = 0;
	for(i = l; i <= r; i ++){
		sum += num[i];
	}
	int result = sum % n;
	return result;
}

int funM(int num[], int n, int l, int r){
	int i;
 	int sum = 1;
	for(i = l; i <= r; i ++){
		sum = sum * (num[i] % n);
		sum = sum % n;
	}
	int result = sum;
	return result;
}

int funH(int num[], int n, int l, int r){
	int i;
	int result = num[l];
		for(i = l + 1; i <= r; i ++){
			result ^= num[i];
		}
	return result;
}

int MIN(int a, int b){
	int min;
	if(a > b){
		min = b;
	}else{
		min = a;
	}
	return min;
}

int MAX(int a, int b){
	int max;
	if(a < b){
		max = b;
	}else{
		max = a;
	}
	return max;
}

int main()
{
	int n, K;
	scanf("%d%d", &n, &K);
	int i;
	int num[105];
	for(i = 0; i < n; i ++){
		scanf("%d", &num[i]);
	}
	int l[105], r[105];
	for(i = 0; i < K; i ++){
		scanf("%d%d", &l[i], &r[i]);
	}
	int N[105], M[105], H[105];
	int min, max;
	
	for(i = 0; i < K; i++){
		N[i] = funN(num, n, l[i], r[i]);
		M[i] = funM(num, n, l[i], r[i]);
		max = MAX(N[i], M[i]);
		min = MIN(N[i], M[i]);
		H[i] = funH(num, n, min, max);
		printf("%d\n", H[i]);
	}
	
	return 0;
}