#include <stdio.h>
int c(int m,int n);
int main()
{
	int m,n,result;
	    scanf("%d %d",&m,&n);
	    result=c(m,n);
	    printf("%d",result);

	return 0;
}
int c(int m,int n)
{
	if(m<n||m<1||n<1)
	    return 0;
	if(n==1)
	    return m;
	if(m==n)
	    return 1;
	return c(m-1,n)+c(m-1,n-1);
}