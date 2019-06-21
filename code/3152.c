#include<stdio.h>
int jc(int a,int b)
{
	int re=1;
	while(a>=b)
		re*=a--;
	return re;
}
int main()
{
	int m,n,c=0;
	scanf("%d%d",&m,&n);
	printf("%d",jc(m,m-n+1)/jc(n,1));
	return 0;
}