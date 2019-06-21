#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int f(int n){
	int r=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			r=0;
			break;
		}
	}
	return r;
}
int main(){
	int n,m;
	scanf("%d",&n);
	n++;
	while(!f(n)){
		n++;
	}
	printf("%d",n);
	return 0;
}