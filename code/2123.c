#include<stdio.h>

int c(int m,int n){
	if(m==n) return 1;
	else if(n==0) return 1;
	else return c(m-1,n)+c(m-1,n-1);
} 

int c(int,int);
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int e=c(m,n);
	printf("%d",e);
	return 0;
}