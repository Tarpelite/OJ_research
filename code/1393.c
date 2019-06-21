#include<stdio.h>
int is_prime(int n){
	for(int now=2;now*now<=n;now++)
		if(n%now==0)
			return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	if(n==2)
		printf("3");
	if(n>2){
		for(n=n+2;!(is_prime(n));n+=2);
		printf("%d",n);
	}
	return 0;
}