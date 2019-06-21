#include<stdio.h>
int main()
{
	int m,n,i,s=1;
	scanf("%d%d",&m,&n);
	for(i=m;i>m-n;i--)
	s=s*i;
	for(i=1;i<=n;i++)
	s=s/i;
	printf("%d",s);
	return 0;
}