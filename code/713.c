#include<stdio.h>
int C(int m,int n){
	if(m==n)
	return 1;
	if(n==1)
	return m;
	if(m<n||m<1||n<1)
	return 0;
	return C(m-1,n)+C(m-1,n-1);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",C(m,n));
	return 0;
}