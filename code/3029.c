#include<stdio.h>
int prime(int);
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n+1;i<=100010;i++){
		if(prime(i)){
			printf("%d",i);
			break;
		}
	}
	return 0;
} 

int prime(int x)
{
	if(x==1){
		return 0;
	}
	for(int j=2;j*j<=x;j++)
		if(x%j==0){return 0;}
	return 1;
}