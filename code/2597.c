#include<stdio.h>
long long jiecheng();
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    long long res;
    if (m==0) res =1;
    else
    res = jiecheng(n)/(jiecheng(n-m)*jiecheng(m));
    printf("%lld",res);
    return 0;
}


long long jiecheng(int k)
{
    long long s=1;
    for (;k>=1;k--)
        s*=k;
    return s;
}