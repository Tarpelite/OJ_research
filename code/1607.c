#include<stdio.h>
int f(int,int);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m==n||n==0)
	printf("1");
	else{
		if(m-n<=n)
	    n=m-n;
	    printf("%d",f(m,m-n+1)/f(n,1));
	}
}
int f(m,n){
	if(m==n)
	return n;
	else
	return m*f(m-1,n);
}