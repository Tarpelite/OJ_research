#include<stdio.h>
int sum(int m,int n)
{
	if(n==m||n==0)
		return 1;
	else
		return sum(m-1,n)+sum(m-1,n-1);
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int t=sum(m,n);
	printf("%d\n",t);
}