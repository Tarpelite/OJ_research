#include <stdio.h>
#include <stdlib.h>
int comb(int,int);
int main()
{
    int m,n,x;scanf("%d%d",&m,&n);
    if(n==0){printf("0");return 0;}
    x=comb(m,n);

    printf("%d",x);
    return 0;
}
	int comb(int m,int n)
	{
		if(m==n)return 1;
		if(n==1)return m;
		if(n==0)return 1;
		if(n>m/2)n=m-n;
		return comb(m-1,n)+comb(m-1,n-1);
	}