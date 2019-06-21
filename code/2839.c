#include<stdio.h>
int gcd(int x){
	int i;
	int count=0;
	
	for(i=2;i<x;i++){
		if(x%i==0){
			count++;
		}
	}
	if(count==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int a;
	scanf("%d",&a);
	int i=1;
	while(1){
		if(gcd(a+i)==1){
			printf("%d",a+i);
			break;
		}
		i++;
	}
	return 0;
}