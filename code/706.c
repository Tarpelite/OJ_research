#include<stdio.h>
int main()
{
	int m,n,fm=1,fz=1,i,j;
	scanf("%d%d",&m,&n);
	for(i=m-n+1;i<=m;i++)
	fz=fz*i;
	for(j=1;j<=n;j++)
	fm=fm*j;
	printf("%d",fz/fm);
	return 0;
 }