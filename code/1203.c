#include<stdio.h>
int comb_num(int m,int n) 
{
	if(m<n||m<1||n<1)
	{
		return 0;
	}
	else if(n==1)
	{
		return m;
	}
	else if(m==n)
	{
		return 1;
	}	
	else
	{
		return comb_num(m-1,n)+comb_num(m-1,n-1);
	}
}

int main()
{
	int n,m;
	
	scanf("%d%d",&m,&n);
	
	printf("%d",comb_num(m,n));
	
	return 0;
 }