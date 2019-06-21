#include<stdio.h>

int cc(int a,int b)
{
	int c;
	if(b==1)
	{
		return a;
	}
	else if(a==b)
	{
		return 1;
	}
	else
	{
		c=cc(a-1,b)+cc(a-1,b-1);
		return c;
	}
 } 
 
 int main()
 {
 	int m,n;
 	scanf("%d%d",&m,&n);
 	printf("%d",cc(m,n));
 	return 0;
 }