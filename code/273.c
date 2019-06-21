#include<stdio.h>

int main(){
	int i;
	int j=0;
	int len;
	scanf("%d",&len);
	
	int x;
	int num[100001]={0};
	for(i=0;i<len;i++){
		scanf("%d",&x);
		num[x]++;
	}
	
	int k;
	scanf("%d",&k);
	for(i=100000;i>0;i--){
		if(num[i]!=0){
			j++;
		}
		if(j==k){
			break;
		}
	}
	
	printf("%d %d\n",i,num[i]);
	
	
	return 0;
}