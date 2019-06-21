#include<stdio.h>
long long y(int,int);
long long x(int);
int main()
{
    int n,m;

    scanf("%d%d",&m,&n);
    if(n*m==0)
        printf("0\n");
        else
    printf("%lld\n",y(m,n));
	return 0;
 }
long long y(int m,int n)
{
    return x(m)/(x(n)*x(m-n));
}
long long x(int m)
{
    int i;
    long long s=1;
    for(i=2;i<=m;i++)
        s*=i;
    return s;
}