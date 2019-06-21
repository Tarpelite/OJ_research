#include<stdio.h>
long long J(int);
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
    long long a,b,c;
    a=J(n);
    b=J(m);
    c=J(n-m);
    printf("%lld",a/(b*c));
    return 0;
}
long long J(int x)
{
    long long j,i;
    j=1;
    for(i=1;i<=x;i++){
        j=j*i;
    };
    return j;
}