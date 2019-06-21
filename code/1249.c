#include<stdio.h>
int main()
{
	int m,n,i,j,sum=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>=m-n+1;i--)sum=sum*i;
	for(j=1;j<=n;j++)sum=sum/j;
	printf("%d",sum);
	return 0;
}