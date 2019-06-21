#include <stdio.h>
int main()
{
	int m,n,p=1,t=1,i,j;
	scanf("%d%d",&m,&n);
	for(i=m-n+1;i<=m;i++){
		p*=i;
	}
	for(j=1;j<=n;j++)
	{
		t*=j;
	}
	printf("%d",p/t);
	return 0;
}