#include <stdio.h>
int num[100000]={0};
int main(){
	int n,k;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);//无用的K做中间变量 
		num[k]++;
	}
	scanf("%d",&k);
	n=100000;//无用的n做箭头 
	while(k>0){
		do{
			n--;
		}while(!num[n]);
		k--;
	}
	printf("%d %d",n,num[n]);
	return 0;
}