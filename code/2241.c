#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);n++;
	while(1){
		for(i=n-1;i>=2;i--){
			if(n%i!=0)continue;
			else{
				n++;break;
			}
		}
		if(i==1){
			printf("%d",n);break;
		}
	}
	return 0;
}