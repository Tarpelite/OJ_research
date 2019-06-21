#include<stdio.h>
int C(int m,int n);
int main()
{
	int m,n,K;
	scanf("%d%d",&m,&n);
	K=C(m,n);
	printf("%d",K);
	return 0;
}

int C(int m,int n)
{
	if(n==m)
	    return 1;
	    
	if(n==1)
	    return m;
	
	return C(m-1,n)+C(m-1,n-1);
}