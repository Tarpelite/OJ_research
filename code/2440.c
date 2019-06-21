#include <stdio.h>

int main()

{
	int m,n,i;
	scanf("%d%d",&m,&n);
	int s=1,x=1,k=m;
	for(i=1;i<=n;i++)
	{
		x*=i;
		s*=k;
		k--;
	}
	int y=s/x;
	printf("%d",y);
	return 0;
}