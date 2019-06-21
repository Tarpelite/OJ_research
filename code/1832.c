#include<stdio.h>
int main(){
	long long n,i;
	scanf("%lld",&n);
	i=1;
	int a[100001]={0};
	int p;
	while(i<=n){
		scanf("%d",&p);
		a[p]++;
		i++;
	}
	int k;
	scanf("%d",&k);
	int q=0;
	int j;
	int t;
	for(t=1;t<k;t++){
	
	for(p=100000;p>=0;p--){
	if(a[p]!=0){
		a[p]=0;
		break;
	}
	}
};

for(p=100000;p>=0;p--){
		if(a[p]!=0){
			q=a[p];
			j=p;
			break;
		}
	}
	printf("%d %d",j,q);
	return 0;
}