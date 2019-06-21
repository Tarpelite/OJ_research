#include<stdio.h>
int comb_num(int m,int n)
{
	if(m<n||m<1||n<1)
	{
		return 0;
	}
	if(m==n)
	{
		return 1;
	}
	if(n==1)
	{
		return m;
	}
	else
	{
		return comb_num(m-1,n)+comb_num(m-1,n-1);
	}
}


int main()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=comb_num(m,n);
	printf("%d",k);
	return 0;
}