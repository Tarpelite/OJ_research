#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	
	int i;
	int jc=1;
	int cj=1;
	for(i=1;i<=n;i++){
		jc*=m;
		m--;
		cj*=i;
	}
	printf("%d",jc/cj);
	return 0;
}