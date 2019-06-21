#include<stdio.h>
int zuHe(int n,int m)
{
	if(m==n) return 1;
	if(m==1&&m!=n) return n;
	else return zuHe(n-1,m-1)+zuHe(n-1,m); 
}

int main()
{
	int m,n,c;
	scanf("%d%d",&n,&m);
	c=zuHe(n,m);
	printf("%d",c);
	return 0;
}