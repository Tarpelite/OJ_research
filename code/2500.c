#include<stdio.h>
int comb(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",comb(m,n));
	return 0;
}

int comb(int m,int n)
{
	if(n==1)
	return m;
	else if(m==n)
	return 1;
	else
	return comb(m-1,n-1)+comb(m-1,n);
}