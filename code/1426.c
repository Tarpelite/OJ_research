#include<stdio.h>

int main()
{
	int a,b,i;
	unsigned long long int c=1LL,d=1LL;
	scanf("%d%d",&a,&b);
	for(i=b+1;i<=a;i++){c*=i;}
	for(i=2;i<=(a-b);i++){d*=i;}
	printf("%llu",(c/d));
	return 0;
}