#include <stdio.h>
int main()
{
	int m,n;
    long long M,i,x,y;
	scanf("%d%d",&m,&n);
	M=1;
	x=1;
	for(i=0;i<n;i++){
		x=x*m;
		m--;
	}
	y=1;
	for(i=0;i<n;i++){
		y=y*M;
		M++;
	}
	printf("%lld",x/y);
	return 0;
}