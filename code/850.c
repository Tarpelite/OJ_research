#include <stdio.h>
int main()
{
	int m,n,i;
	long long am=1,an=1;
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++)
		am*=m-i+1,an*=i;
	printf("%lld",am/an);
	return 0;
}