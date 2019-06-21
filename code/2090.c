#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long int n,m;
	int i,j,a,b,c;
	int is(int x){
		int k;
		for (k=2;k<x;k++){
			if(x %k ==0)
				return 0;
				}
		return  1;		
	}
	scanf("%d",&n);

	for (m =n+1;m<n+10000;m++) {
		if(is(m)){
			printf("%d",m);
			break;
		} 
	} 
	
	
	return 0;
}