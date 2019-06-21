#include<stdio.h>
int a[100001]={0};
int main(){
	int n,i,k,x,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);a[x]++;
		max=max>x?max:x;
	}
	scanf("%d",&k);
	int y=0;
	for(i=max;i>=1;i--){
		if(a[i]>0){
			y++;
			if(y==k)break;
		}
	}
	printf("%d %d",i,a[i]);
	return 0;
}