#include<stdio.h>
long long jie(int);
int main()
{
    int n,m;
    long long s;
    scanf("%d%d",&n,&m);
    s=jie(n)/(jie(m)*jie(n-m));
    printf("%lld\n",s);
	return 0;
 }
long long jie(int n)
{
    int i;
    long long s=1;
    for(i=2;i<=n;++i)
        s*=i;
    return s;
}