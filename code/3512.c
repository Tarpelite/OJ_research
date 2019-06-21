#include <stdio.h>

int main(){
	int arr[100000] = {}; 
	int n, m, i, k;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		
		scanf("%d", &m);
		arr[m]++;
	}
	scanf("%d", &k);
	int has = 0;
	for(i = 99999; i > 0; i--){
		if(arr[i] > 0){
			has++;
		}
		if(has == k){
			break;
		}
	}
	printf("%d %d", i, arr[i]);
}