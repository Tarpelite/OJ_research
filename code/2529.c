#include<stdio.h>
#include<math.h>
int f(int n){
	int i,flag=1;
	for(i=2;i<sqrt(n)+1;i++){
		if(n%i==0) {flag=0;break;
		}
	}if(flag==1) return n;
	else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<100000;i++){
	n=n+1;
	if(f(n)==n) break;	
	}
	printf("%d",f(n));
	return 0;
}