#include<stdio.h>
long long c(int,int);
int main()
{
    int n,m;

    scanf("%d%d",&m,&n);
    if(m==0)
        printf("%0\n");
    else printf("%lld\n",c(m,n));
	return 0;
 }
long long c(int m,int n)
{
    if(n==0||m==n)
        return 1;
    else if(n==1)
        return m;


    else return c(m-1,n-1)+c(m-1,n);
}