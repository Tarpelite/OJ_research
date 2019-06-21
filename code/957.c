#include <stdio.h>
#include <math.h>
int isprime(int n){
	int np=(int)(sqrt(n)+1),i;
	for(i=2;i<np;i++){
		if(n%i==0) return 0;
		}
		
		return 1;
	
	
}


int main (){
	int x,i;
	scanf("%d",&x);
	while(1){
		x++;
		if(isprime(x)) break;
		
	}
	printf("%d",x);
	return 0;
}