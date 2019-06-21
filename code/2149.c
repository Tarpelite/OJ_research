#include<stdio.h>
int f(int m,int n)
{
    int a=1;
	while(m!=n)
	{
		a=a*m;
		m--;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
		printf("%d",f(a,a-b)/f(b,0));

	return 0;
}