#include <stdio.h>

int main(){
	int n,m,i;
	scanf("%d",&n);
	for(m=n+1;m<2*n;m++){
		for(i=2;i*i<=m;i++){
			if(m%i==0){
				break;
			}
			 
		}
		if(i*i>m){
			printf("%d",m);
			break;
		}
		
		
	}
	
	return 0;
	}