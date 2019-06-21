#include<stdio.h>
long long jiecheng(long long n)
{
    long long a=1,i;
    for(i=1;i<=n;i++)
    a*=i;
    return a;
}
int main()
{
    long long m,n,a,b,c,d;
    scanf("%lld %lld",&m,&n);
    a=jiecheng(m);
    b=jiecheng(n);
    c=jiecheng(m-n);
    d=a/b/c;
    printf("%lld",d);
}