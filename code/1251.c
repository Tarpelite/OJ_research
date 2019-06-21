#include<stdio.h>
int C(int m, int n);
int main()
{
	int m, n;
	scanf("%d%d",&m, &n);
	printf("%d",C(m,n)/C(n,n));
	return 0;
}
int C(int m,int n){
	int i,a=1;
	for(i=m;i>m-n;i--)
		a=a*i;
	return a;
}