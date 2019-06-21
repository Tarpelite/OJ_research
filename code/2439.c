#include <stdio.h>
double roll (int a)
{
	if (a==0) return 1;
	else return roll(a-1)*a;
}

int main()
{
	int m,n,c;
	scanf ("%d %d",&m,&n);
	if (m>=n) c=roll(m)/(roll(n)*roll(m-n));
	if (m<n) c=1;
	printf ("%d",c);
	return 0;
}