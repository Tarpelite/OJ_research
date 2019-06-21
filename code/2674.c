#include<stdio.h>
int main(){
	int gcd,gcd1;
	int i,j,m=0;
	scanf("%d",&gcd);
	for(i=gcd+1;m==0;i++){
		m=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				m=0;
				break;
			}
		}
		
	}
	printf("%d",i-1);
	return 0;
}