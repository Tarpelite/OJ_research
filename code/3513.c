#include<stdio.h>
int zs(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	while(1){
		n=n+1;
		if(zs(n)==1)
		{
			printf("%d",n);
			break;
		}
	}
	return 0;
}