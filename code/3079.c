#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main ()
{
	int m,n;
	scanf("%d %d",&m,&n);
	long long combine ();
	if (n==0)
	printf("0");
	else
	printf("%lld",combine(m,n));
	return 0;
}

long long combine (int m,int n)
{
	if ((n==0)||(m==n))
	return 1;
	else
	{
		return combine (m-1,n) + combine (m-1,n-1);
	}
}