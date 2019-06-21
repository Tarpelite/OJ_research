#include<stdio.h>
int is_zhishu(int);
int k;
int main(){
	int n;
	
	scanf("%d",&n);
	int sum;
	sum=n+1;
	k=is_zhishu(sum);
	while(k==1){
		sum=sum+1;
		k=is_zhishu(sum);
	}
    
    printf("%d",sum);
    return 0;
}

int is_zhishu(int n){
	int i,b,k;
	
	for(i=2;i<n;i++){
		b=n%i;
		k=0;
		if(b==0){
			k=1;
		}
	    if(k==1){
	    	return 1;
	    	break;
		}
	}
    return k;
}