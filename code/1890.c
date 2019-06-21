#include<stdio.h>
int main(){
	int a[100001]={0},i;
	int n,k;
	int num;
	int count=0;
	scanf("%d",&n);
	while(n>=1){
		scanf("%d",&num);
		a[num]++;n--;
	}
	scanf("%d",&k);
	for(i=100000;i>0;i--){
		if(a[i]!=0) count++;
		if(count==k){
			printf("%d %d",i,a[i]);
			return 0;
		}
	}
}