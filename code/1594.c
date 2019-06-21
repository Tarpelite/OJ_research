#include<stdio.h>

int main(){
	int a[100005]={0};
	int n;
	scanf("%d",&n);
	int max=0;
	while(n--){
		int c;
		scanf("%d",&c);
		if(c>max) max=c;
		a[c]++;
	}
	int k;
	scanf("%d",&k);
	int i;
	for(i=max;i>=1;i--){
		if(a[i]) k--;
		if(k==0) break;
	}
	printf("%d %d\n",i,a[i]);
	return 0;
}