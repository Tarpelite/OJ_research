#include<stdio.h> 
#include<stdio.h>
#include<math.h>
#include<string.h>
int c(int,int);
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	printf("%d",c(n,m));
}
int c(int n,int m)
{
	if(n==m)
		return 1;
	if(m==1)
		return n;
	return c(n-1,m-1)+c(n-1,m); 
}