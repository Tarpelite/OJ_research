#include <stdio.h>
int ifzs(int);
int main(){
	int n;
	scanf("%d",&n);
	for(n=n+1;1-ifzs(n);n++){
	}
	printf("%d",n);
	return 0;
}

int ifzs(int x){
	int i;
	for(i=2;i<=x&&x%i!=0;i++){
	}
	if(i==x){
		return 1;//质数 
	}
	else{
		return 0;//合数 
	}
}