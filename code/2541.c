#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int pro1=1,pro2=1,pro;
	
	for(i=m;i>m-n;i--)
	{
		pro1=pro1*i;
	 }
	for(j=1;j<=n;j++)
	{
		pro2=pro2*j;
	 }
	
	pro=pro1/pro2;
	printf("%d",pro);
	return 0;
}