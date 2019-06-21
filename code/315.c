//D
#include<stdio.h>
long long f(int );
int main()
{
	int m,n;
	long long way;
	scanf("%d%d",&m,&n);
	way = f(m)/(f(n)*f(m-n));
	printf("%lld",way);
	return 0;
} 

long long f(int n)
{
	if(n <= 1)
		return 1;
	else
		return n*f(n-1);
}