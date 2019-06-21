#include<stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	m=n+1;
	while(1){
		int i=1,k=0;
	for(i=1;i<=m/2;i++){
		if(m%i==0){
			k++;
		}
	}
	if(k==1){
		printf("%d",m);
		break;
	}else{
		m++;
	}
	}
	
	return 0;
}