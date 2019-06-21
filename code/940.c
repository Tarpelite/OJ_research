#include<stdio.h>
int main(){
	
	int z,t,n,m,k=0;
	scanf("%d",&z);
	for(t=z+1;t<10000000;t++){
		for(n=2;n<t;n++){
			if(t%n==0) {
			k=1;
			break;
			}
		}if(k==0) {
			printf("%d",t) ;
			break;
		}k=0;
	}

	return 0;
	
}