#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=n+1;i<100500;i++){
		for(j=2;j<i;j++){
			if(i%j==0)	
			break;
			if(j==i-1){
				printf("%d",i);
				return 1;
		}
}
}
}