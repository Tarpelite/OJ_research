#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i,j,n,flag;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++){
		flag=1;
		for(j=2;j<sqrt(i)+1;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}