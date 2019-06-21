#include<stdio.h>
int jc(int m,int n){
	if(m==n||n==0) return 1;
	return jc(m-1,n-1)+jc(m-1,n);
}
int main()
{
	int n,m;
	scanf("%d%d",&m,&n);
	printf("%d",jc(m,n));
	return 0;
}