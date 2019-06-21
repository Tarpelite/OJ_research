#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
long long m,n,sum=1;

int main()
{
	scanf("%lld%lld",&m,&n);
	for(int i=n+1;i<=m;i++) sum*=i;
	for(int i=2;i<=m-n;i++) sum/=i;
	printf("%lld",sum);
	return 0;
}