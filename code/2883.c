#include<stdio.h>
int comb(int m, int n);
int main()
{
	int m,n,t;
	scanf("%d %d",&m,&n);
	t=comb(m,n);
	printf("%d",t);
	return 0;
}
int comb(int m, int n )
{
	if(m<n||m<1||n<1)
	    return 0;
	if(n==1)
	    return m;
	if(n==m)
	    return 1;
	return (comb(m-1,n)+comb(m-1,n-1));
}