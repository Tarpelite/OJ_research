#include<stdio.h>
int ljj(int a){
	int i;	
	for(i=2;i<a;i++){
		if(0==a%i){
		return ljj(a+1)	;
		}
	}
	return a;
}
int main(){
	int a;
	scanf("%d",&a);
	a=ljj(a+1);
	printf("%d",a);
	return 0;
}