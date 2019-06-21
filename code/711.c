#include<stdio.h>

int isprime(int n){
	int i;
	
	for(i=n/2;i>1;i--){
		
		if (n%i==0){
			return 0;//合数 
		}
		
	}
	
	return 1;//质数 
	
}




int main(){
	
	int num;
	scanf("%d",&num);
	int i;
	
	for(i=num+1;;i++){
		if(isprime(i)==0){
			continue;
		}
		if(isprime(i)==1){
			printf("%d",i);
			break; 
		}
	}
	
	return 0;
}