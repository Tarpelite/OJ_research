#include<stdio.h>
int main(){
	int n,k,a;
	int i=2,flag=0;
	scanf("%d",&n);
	if(n==1){
		printf("2");
	}
	k=n+1;
	while(k>n){
		for(i=2;i<k;i++){
			a=k%i;
			if(a==0){
				flag=1;
	            break;
			}
		}
		if(flag==0){
			printf("%d",k);
			break;
		}
		else{
		    i=2;
		    k++;
		    flag=0;
		}
	}
	return 0;
}