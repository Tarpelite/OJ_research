#include<stdio.h>


long long C(int n,int m){
	long long x=1;
	long long i;
	if(n-m<m)m=n-m;
	for(i=n;i>=n-m+1;i--){
		x=x*(long long)i;
	}
	for(i=1;i<=m;i++)x=x/(long long)i;
	return x;
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);//a是下面，b是上面 
	printf("%lld",C(n,m));
	return 0;
}