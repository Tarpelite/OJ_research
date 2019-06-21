#include<stdio.h>
int mul(int l, int r){
	int i,sum=1;
	for(i=l;i<=r;i++) sum*=i;
	return sum;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d\n",mul(n-m+1,n)/mul(1,m));
	return 0;
}