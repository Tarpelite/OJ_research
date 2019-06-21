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
	int combine ();
	printf("%d",combine(m,n));
	return 0;
}

int combine (int m,int n)
{
	if ((n==0)||(m==n))
	return 1;
	else
	{
		return combine (m-1,n) + combine (m-1,n-1);
	}
}