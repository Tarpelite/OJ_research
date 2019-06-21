#include <stdio.h>

int main()
{
	int x ;
	int cnt = 0;
	
	scanf("%d", &x);
	x += 1;
	while(cnt < 100000){	
		int i;
		int isPrime = 1;
		
		for(i = 2; i < x; i++){
			if(x % i == 0){
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 1){
			cnt++;
			printf("%d", x);
			break;
		}
		x++;
	}
	return 0; 
}