#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(n>m)
	{
		printf("%d\n",m);
	} else
	{
		printf("%d\n",cmb(m,n));
	}
	return 0;
}
int cmb(int m,int n)
{
	if(n==1)
	{
		return m;
	} else if(n==m)
	{
		return 1;
	}
	return cmb(m-1,n)+cmb(m-1,n-1);
}