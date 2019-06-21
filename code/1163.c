#include<stdio.h>

int main(){
	int n,i=1,number=0,K,result;
	int a[100010]={},max=0,min=100000;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&number);
		i++;
		a[number]++;
		if(number>max) max=number;
		if(number<min) min=number;
	}
	scanf("%d",&K);
	for(i=max;i>min;i--){
		if(a[i]!=0) K--;
		if(K==0) break;
	}
	printf("%d %d",i,a[i]);

	return 0;
}