#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,d,m;
	scanf("%d",&n);
	while(1){
		n++;
		i=2;
		m=0;
		while(i<n){
			d=n%i;
			if(d==0)
			m++;
			i++;
			
		}
		if(m==0){
			printf("%d",n);
			return 0;
			
			
		}
		
		
		
	
	}
	
	
	
	
	
	
	
	return 0;
}