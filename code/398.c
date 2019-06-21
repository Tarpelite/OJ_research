#include <stdio.h>
#include <stdlib.h>

int check(int n){
	int mid,i,judge=1;
	mid = n/2 +1;
	for(i=2;i<=mid;i++){
		if(n%i==0){
			judge=0;
			break;
		}
	}
	return judge;
}





int main() {
	int n,i;
	scanf("%d",&n);
	
	i=n+1;
	
	while(1){
		if(check(i))
		  break;
		else
		  i++;
	}
	
	printf("%d",i);
	
	
	
	return 0;
}