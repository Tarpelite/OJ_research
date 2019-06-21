#include<stdio.h>
long long zuhe(int m,int n)
{
	long long ans = 1;
	if(m < n-m) m = n-m;
	for(int i = m+1; i <= n; i++) ans *= i;
	for(int j = 1; j <= n - m; j++) ans /= j;
	return ans;
}
int main()
{
	int m,n,x;
	scanf("%d%d",&m,&n);
	x=zuhe(n,m);
	printf("%lld",x);
	return 0;	 
}