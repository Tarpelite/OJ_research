#include<stdio.h>
long long c(int,int);
long long jie(int);
int main()
{
    int n,m;

    scanf("%d%d",&m,&n);
    printf("%lld\n",c(m,n));
	return 0;
 }
long long c(int m,int n)
{
    return jie(m)/(jie(n)*jie(m-n));
}
long long jie(int m)
{
    int i;
    long long s=1;
    for(i=2;i<=m;i++)
        s*=i;
    return s;
}