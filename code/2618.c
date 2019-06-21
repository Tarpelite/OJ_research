#include<stdio.h>
int is_prime(int n){
	int k,i;
	k=n-1;
	while(n%k!=0){
		k--;
	}
	if(k==1){
		i=1;
	}
	else{
		i=0;
	}
	return i;
}
int main(){
	int n,x;
	scanf("%d",&n);
	for(x=n+1;is_prime(x)==0;x++){
	}
	printf("%d",x);
	return 0;
}