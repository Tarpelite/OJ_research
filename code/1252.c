#include <stdio.h>
int f(int,int);
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d",f(m,n));
	return 0;
}
int f(int m,int n){
	int y,i,x;
	for(i=1,y=1;i<=n;i++,m--)
	y*=m;
	for(i=1,x=1;i<=n;n--)
	x*=n;
	return y/x;
}