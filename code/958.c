#include<stdio.h>
long long multi(int);
int main(){
	int m,n;
	long long y;
	scanf("%d%d",&m,&n);
	y=multi(m)/(multi(n)*multi(m-n));
	printf("%lld",y);
	return 0;
}
long long multi(int x){
	int i;
	long long multi=1;
	for(i=1;i<=x;i++)
		multi*=i;
	return multi;
}