#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int m=n+1;
	int i,j;
	while(m<2*n){
		
		j=0;
		for(i=2;i<m;i++){
			if(m%i==0){
				j=1;
				break;
			}
		}
		if(j==1){
			m++;
		}
		else if (j==0){
			printf("%d",m);
			break;
		}
	}
	return 0;
}