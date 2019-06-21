#include<stdio.h>
#define size 100001
	int a[size]={0};
int main(){

	int i,b,c,x;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		scanf("%d",&b);
		a[b]++;
	}
	scanf("%d",&x);
	for(i=100001;i>0;i--){
		if(a[i]!=0){
			x--;
		}
		if(x==0){
			break;
		}
	}
	printf("%d %d",i,a[i]);
	return 0;
}