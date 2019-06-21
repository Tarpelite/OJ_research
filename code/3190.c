#include<stdio.h>
#define ll long long 
ll combination(int n,int m){
	ll jien=1,jiem=1;
	if(m==n||m==0)return 1;
	for(int i=1+m;i<=n;++i)	jien*=i;
	for(int i=1;i<=n-m;++i) jiem*=i;
	/*else{
		for(int i=n-m+1;i<=n;++i)	jien*=i;
		for(int i=1;i<=m;++i) jiem*=i;
	}
	printf("\n");*/
	return jien/jiem;
}
int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
	printf("%lld\n",combination(n,m));}
	return 0;
}