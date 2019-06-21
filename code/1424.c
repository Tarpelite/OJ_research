#include<stdio.h>
 
int main(){
	int n,k,b,a[100000+5]={0};
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&b);
		a[b]++;
		n--;
	}
	scanf("%d",&k);
	for(int i=100000+4;i>=0;i--){
		if(a[i]>0){
			k--;
			if(k==0){
				printf("%d %d\n",i,a[i]);
				return 0;
			}
		}
	}
	return 0;
}