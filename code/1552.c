#include <stdio.h>
int zuhe(int a,int b)
{
	if(a==b||b==0)
	return 1;
	return zuhe(a-1,b)+zuhe(a-1,b-1);
}
int main ()
{
	int m,n,k;
	scanf("%d%d",&m,&n);
	k=zuhe(m,n);
	printf("%d",k);
	return 0;
}