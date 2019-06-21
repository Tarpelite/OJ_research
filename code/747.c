#include<stdio.h>
long long ruo(int n,int m)
{
    long long U=1,i;
    if(n-m<m)
        m=n-m;
    for(i=n; i>=n-m+1; i--)
        U*=(long long)i;
    for(i=1; i<=m; i++)
        U/=(long long)i;
    return U;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%lld\n",ruo(m,n));
    return 0;
}