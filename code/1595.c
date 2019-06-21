#include <stdio.h>
#include <math.h>
int zhishu(int n){
	int i,flag=0;
	if(n==2&&n==3){
		flag=0;
	} 
	else if(n>3){
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				flag=1;break;
			}
		}
	}
    return flag;
}
int main(){
	int n,zs;
	scanf("%d",&n);
	do{
		n=n+1;
		zs=zhishu(n);
	}while(zs==1);
	printf("%d",n);
	return 0;
}