#include<stdio.h>
long long int je(int x)
{
	int i;
	long long int y=1;
	for(i=1;i<=x;i++)
	y=y*i;
	return y;
 } 
int main()
{
	int m,n;
	long long int ans;
	scanf("%d %d",&m,&n);
	if(n<=m) 
	ans=je(m)/((je(n))*(je(m-n)));
	if(n>m)
	ans=1;
	printf("%lld",ans);
	return 0;
	 
	
 }