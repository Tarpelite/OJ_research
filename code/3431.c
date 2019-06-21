#include <stdio.h>
int c( int m,int n )
{
	int a = 1,b = 1;
	if (n > m-n)
    n = m-n;				
	if( n == 0 )
		return 1;
	for( int i = m ; i >=m-n+1 ; i--  )
		a = a*i;
	for( int i = 1 ; i <= n ; i++ )
		b = b*i;
	return a/b;
}

int main()
{
    int m,n,res;
    scanf("%d %d", &m, &n);
    res = c(m,n);
    printf("%d\n", res);
    return 0;
}