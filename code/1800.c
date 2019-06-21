#include<stdio.h>
int main(){
	int n,a,i,b,k,m=0;
	scanf("%d",&n);
	for(i=n+1;i<=1000000;i++){
		for(k=2;k<=i-1;k++){
			if(i%k==0){
				m=1;
				break;
			}
		}
		b=i;
		if(m==0){
			break;
		}
		m=0;
	}
	printf("%d",b);
	return 0;
}