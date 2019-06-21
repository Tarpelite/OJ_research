#include <stdio.h>
#include <math.h>

int p(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	t++;
	for(;1;t++){
		if(p(t)){
			printf("%d",t);
			return 0;
		}
	}
	return 0;
}