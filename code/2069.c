#include<stdio.h>
int is_Prime(int x);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<=1000000;i++){
		if(is_Prime(i)){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
int is_Prime(int x){
	int j;
	if(x==1)return 0;
	else{
		for(j=2;j*j<=x;j++){
			if(x%j==0)return 0;
		}
	}
	return 1;
}