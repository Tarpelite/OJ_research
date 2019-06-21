#include<stdio.h>
int main()
{
	int m,n,a,b,M,N;
	scanf("%d%d",&m,&n);
	a=1,b=1,M=1,N=1;
	while(a<=n)
	{
		M=M*m;
		m--;
		a++;
	}
	while(b<=n)
	{
		N=N*b;
		b++;
	}
	printf("%d",M/N);
       return 0;
}