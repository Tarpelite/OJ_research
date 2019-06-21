#include<stdio.h>
unsigned long long c(int m,int n){
	int i;
	unsigned long long a=1,b=1,c=1,d;
	for(i=1;i<=m;i++)
	a=a*i;
	if(n==0||n==m)
	return 1;
	for(i=1;i<=n;i++)
	b=b*i;
	for(i=1;i<=m-n;i++){
	c=c*i;}
	d=a/(b*c);
	return d;
} 
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",c(m,n));
	return 0;
}