#include<stdio.h>
int zhishu(int);
int main()
{
	int n,j;
	
	scanf("%d",&n);
	
	for(j=n+1;;j++){
		if(zhishu(j)==1){
			printf("%d",j);
			break;
		}
	}
	return 0;
}

int zhishu(int j){
	int i,found=0;
	for(i=2;i<j;i++){
		if(j%i==0){
			found++;
			break;
		}
	}
	if(found>0){
		return 0;
	}
	else{
		return 1;
	}
}