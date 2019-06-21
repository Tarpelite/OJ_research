#include <stdio.h>
#include <stdlib.h>
int c(int,int);
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",c(n,m));
}
int c(int x,int y)
{
	int i,j;
	int jc=1,fm=1;
	int result;
	for(i=1;i<=x;i++)
	{
		jc=jc*i;
	}
	for(j=0;j<x;j++)
	{
		fm=fm*(y-j);
	}
	result=fm/jc;
	return result;
}