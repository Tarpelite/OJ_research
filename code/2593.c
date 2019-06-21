#include <stdio.h>
int main(){
	int n,i,j,symbol;
	scanf("%d",&n);
    for(i=n+1;i<=200000;i++){
    	symbol=1;
    	for(j=2;j<i;j++){
    		if(i%j==0){
    			symbol=0;
    			break;
			}
		}
		if(symbol==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}