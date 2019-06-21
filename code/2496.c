#include<stdio.h>
int C(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",C(m,n));
	return 0;
}
int C(int m,int n)
{
	if(n==0||m==n)return 1;
	else if(n==1)return m;
	else return C(m-1,n)+C(m-1,n-1);
}