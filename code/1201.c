#include<stdio.h>
int iszs(int i){
		int flag=0;
	if(i==1||i==2||i==3) return 1;
	else{
		for(int j=2;j<i/2;j++){
			if(i%j==0) flag=1;
		}
		if(flag==0) return 1;
		else return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n+1;i<=105000;i++){
		if(iszs(i)){
			printf("%d",i);
			break;
		}
	}
	
}