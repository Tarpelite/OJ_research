#include<stdio.h>
int c(int n,int m){
	int s=0;
	if(m==n)
		return 1;
	else if(n==0)
		return 1;
	else
		s=c(n-1,m-1)+c(n,m-1);
	return s;
}
int main()
{    
    int n,m,s;
    scanf("%d%d",&m,&n);
    s=c(n,m);
	printf("%d",s);
	return 0;
}