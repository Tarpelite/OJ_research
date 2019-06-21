#include<stdio.h>
int comb(int x, int n);
int main()
{
	int x,n,t;
	scanf("%d %d",&x,&n);
	t=comb(x,n);
	printf("%d",t);
	return 0;
}
int comb(int x, int n )
{
	if(x<n||x<1||n<1)
	    return 0;
	if(n==1)
	    return x;
	if(n==x)
	    return 1;
	return (comb(x-1,n)+comb(x-1,n-1));
}