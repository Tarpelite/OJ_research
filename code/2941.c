#include<stdio.h>
long long f(int n)
{
	int i;
	long long m;
	m=1;
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	return m; 
 }
 
int main()
{
	int m,n;
	long long m1,n1,a;
	scanf("%d%d",&m,&n);
	m1=f(m);
	n1=f(n);
	a=f(m-n);
	if(m==n)
	printf("1\n");
	else if(m==0||n==0)
	printf("0\n");
	else
	printf("%d\n",m1/(n1*a));
	return 0;
}