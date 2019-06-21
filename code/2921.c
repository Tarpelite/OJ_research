#include <stdio.h>
#include <math.h>
int isprime(int x){
	int i,flag=1;
	for(i=2;i<sqrt(x)+1;i++){
		if(x%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
    int n;
    scanf("%d",&n);
    int i=n+1,ret;
    for(i=n+1;i<110000;i++){
    	if(isprime(i)==1){
    		ret=i;
    		break;
		}
	}
	printf("%d",ret);
	return 0;
}