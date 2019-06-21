#include<stdio.h>
int main(){
	int b[100001]={0};
	int n,c;int a=0;
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		b[a]++;
	}
	int k;
	scanf("%d",&k);
	for(int i=100000;i>0;i--){
		if(b[i]!=0) {
			sum++;
			if(sum==k){
				c=i;
				printf("%d %d",c,b[i]);
				break;
			}
		}
	}
	return 0;
}