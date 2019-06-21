#include <stdio.h>
#include <stdlib.h>

int comb(int,int);

int comb(int m,int n)
{
	if(m<n||m<1||n<1)
	return 0;
	if(n==1)
	return m;
	if(m==n)
	return 1;
	return comb(m-1,n)+comb(m-1,n-1);
}
int main()
 {
 	int m,n;
 	scanf("%d%d",&m,&n);
 	printf("%d",comb(m,n));
	return 0;
}