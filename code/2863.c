#include<stdio.h>
long long jc(int n)
{
	if(n==1)
	return 1;
	else
	return n*jc(n-1);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int x,p=1;
	long long q;
	int i=0;
	while(i<n)
	{
		p=p*m;
		m=m-1;
		i=i+1;
	}
	q=jc(n);
	x=p/q;
	printf("%d",x);
}