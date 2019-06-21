#include<stdio.h>
int main()
{
    long long m,n,r,M=1,N=1,R=1,i;
    scanf("%lld%lld",&m,&n);
    r=m-n;
    if(n==0||n==0) printf("0");
    else if(m==n&&m>0) printf("1");
    else if(n>m) printf("1");
    else{
    for(i=1;i<=m;i++) M*=i;
    for(i=1;i<=n;i++) N*=i;
    for(i=1;i<=r;i++) R*=i;
    printf("%lld",M/(N*R));}
    return 0;
}