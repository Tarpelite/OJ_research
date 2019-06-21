#include<stdio.h>
int combination(int n,int m){
	int jien=1,jiem=1;
	if(m>n/2){
		for(int i=1+m;i<=n;++i)	jien*=i;
		for(int i=1;i<=n-m;++i) jiem*=i;
	}
	else{
		for(int i=n-m+1;i<=n;++i)	jien*=i;
		for(int i=1;i<=m;++i) jiem*=i;
	}
	return jien/jiem;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",combination(n,m));
	return 0;
}