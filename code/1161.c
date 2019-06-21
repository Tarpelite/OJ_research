#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int m,n,i;
	long long ans;
	scanf("%d%d",&m,&n);
	if(m==0||n==0)
		printf("0\n");
	else
	{
		for(ans=1,i=m;i>n;i--)
		{
			ans *= i;
		}
		for(i=1;i<=m-n;i++)
			ans /= i;
		printf("%lld",ans);
	}
	return 0;
}