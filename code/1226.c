#include<stdio.h>
#include<math.h>
int zhi(int x);
int main()
{
	int m,n,zi=1,mu=1;
	scanf("%d%d",&m,&n);
	if(n>m-n)
		n=m-n;
	for(int i=m-n+1;i<=m;i++)
		zi*=i; 
	for(int i=1;i<=n;i++)
		mu*=i;
	printf("%d",zi/mu);
	return 0;
 }