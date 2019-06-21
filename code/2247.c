#include <stdio.h>

int main(){
	int x,i,k;
	scanf("%d",&x);
	for(i=x+1;;i++){
		for(k=2;;k++){
			if(i%k==0) break;
		}
		if(i==k) break;
	}
	printf("%d",i);
	
	return 0;
 }