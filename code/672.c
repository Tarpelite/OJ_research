#include<stdio.h> 
int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	int i=1,j=m,a,b;
	for(a=i=1;i<=n;i++)
	a*=i;
	for(b=j=m;j>=m-n+1;j--)
	b*=j;
	k=b/(a*m);
	printf("%d",k);
	return 0;
}