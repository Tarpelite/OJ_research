#include <stdio.h>
int f(int m,int n)
{
    if (n==1||m==n) return 1;
    else if ((n==m-1) || n==2) return m-1;
    else return f(m-1,n)+f(m-1,n-1);
}
int main()
{
	int m,n,a;
	scanf("%d%d",&m,&n);
	if (n>m) printf("1");
	else{
	a=f(m+1,n+1);
	printf("%d",a);}
	return 0;
}