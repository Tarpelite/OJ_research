#include<stdio.h>
long jiecheng(long n)
{
    long a=1,b=1;
    while(b<n)
    {
        a=a*(b+1);
        b++;
    }
    return a;
}
int main()
{
    long n,m;
    while(scanf("%ld%ld",&n,&m)!=EOF){
    long c,d,e,f;
    d=jiecheng(n);
    e=jiecheng(m);
    f=jiecheng(n-m);
    c=d/(e*f);
    printf("%ld\n",c);}
    return 0;
}