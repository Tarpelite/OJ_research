#include<stdio.h>
int mod_(int);
int main(){
	int n;
	scanf("%d",&n);
	while(mod_(n+1)==0){
		n++;
	}
	printf("%d",n+1);
} 
int mod_(int n){
	int i; 
	for(i=2;i<n;i++){
		if(n%i==0){
			return 0; 
		}	
	}
	return 1;
}