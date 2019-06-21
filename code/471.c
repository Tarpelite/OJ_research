#include<stdio.h>
int main()
{
	int m,n;
	long long p=1,i;
	scanf("%d%d",&m,&n);
	for(i=m;i>=m-n+1;i--){p*=i;
	}
	for(i=1;i<=n;i++){p/=i;
	}
	printf("%lld",p);
	return 0;
 }