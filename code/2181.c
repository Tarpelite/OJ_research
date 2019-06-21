#include<stdio.h>
int f(int n){
	 int i=2,k;
	 while(i<n){
	 	if(n%i==0){
	 		return f(n+1);
		}
		 else{
		 	i++;
		}
	 }
	 return n;
}
int main(){
	int n,p;
	scanf("%d",&n);
	p=f(n+1);
	printf("%d",p);
	
}