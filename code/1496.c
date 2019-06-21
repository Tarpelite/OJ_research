#include<stdio.h>
int main(){
	int a,i=0,n,mod=0;
	scanf("%d",&a);
	for(i=a+1;;i++){
		for(n=2;n<=i/2;n++){
			mod=i%n;
			if(mod==0) break;
		}
		if(mod==1) {
			printf("%d",i);
			break;
		}
	}
	return 0;
}