#include<stdio.h>
int main(){
	int m,n;
	long long f(int x,int y);
	long long zuheshu=0;
	scanf("%d%d",&m,&n);
	if(n>m/2) n=m-n;
		zuheshu=f(m,n);
		printf("%lld",zuheshu);
	return 0;
}

long long f(int x,int y){
	int i,j;
	long long res=1;
	for(i=y+1;i<=x;i++) res=res*i;
	for(j=1;j<=x-y;j++) res=res/j;
	return (res);
}