#include<stdio.h>
int main()
{
	long long c=1;
	int j,i,m,n;
	scanf("%d %d", &n, &m);
	if(m < n-m)
	m = n-m;
	for(i=m+1; i<=n; i++)
        c *= i;
	for(j=1; j<=n-m; j++)
	 c/=j;
	printf("%d", c);
	return 0;

}