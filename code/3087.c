#include<stdio.h>


int fuc(int m,int n){
	
	if(m<n||m<1||n<1){
		return 0;
	}
	else if(m==n){
		return 1;
	} 
	else if(n==1){
		return m;
	}
	else return fuc(m-1,n)+fuc(m-1,n-1);
}
int main(){
	
	int m,n;
	
	scanf("%d%d",&m,&n);
	
	 printf("%d",fuc(m,n));
}