#include<stdio.h>
#include<stdlib.h>
int a(int n){
	int i,f=0;
	if(n==2) return 1;
	for (i=2;i<n;i++){
		f+=(n%i==0);
	}
	if(f==0) return 1;
	else return 0;
} 
int main(){
	int n;
	scanf("%d",&n);
	n++;
	while(a(n)!=1){
		n++;
	}
	printf("%d",n);
    system("PAUSE");
    return 0;}