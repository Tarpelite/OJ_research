#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

long long fact(int m,int n)
{
	int i,j;
	long long ans=1;
	if(n<m-n) n=m-n;
	for(i=n+1;i<=m;i++) ans*=i;
	for(j=1;j<=m-n;j++) ans/=j;
	return ans;
}
int main()
{
	int m,n;
	long long count=0;
	scanf("%d%d",&m,&n);
	count=fact(m,n);
	printf("%d",count);
	return 0;
}