#include<stdio.h>
int f(int n){
	int i,a,sum=0;
	for(i=1;i<=n;i++){
		 a=n%i;
		 if(a==0){
		 	sum+=1;
		 }
	}
	if(sum==2){
		return 1;
	}
	else{
	return 0;
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;;i++){
		if(f(n+i)){
			printf("%d",n+i);
			return 0;
		}
	}
}