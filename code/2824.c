#include<stdio.h>
int a[100001]={0};
int main(){
	
	 

	int n, i, j, cnt=0, k;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		scanf("%d", &j);
		a[j]++;
		
	}
	
	scanf("%d", &k);

	
	for(i=100001;i>=1;i--){
		if(a[i]!=0) cnt++;
		if(cnt==k){
			printf("%d %d", i, a[i]);
			break;
		}
	}
	
	return 0;
}