#include<stdio.h>
int main()
{
     long int m,n,a,b,i,j,k,r,p,q;

    scanf("%ld%ld",&m,&n);
    a=m-n;
    for(r=i=1;i<=m;i++)
        r*=i;
    for(p=j=1;j<=n;j++)
        p*=j;
    for(q=k=1;k<=a;k++)
        q*=k;
    b=r/(p*q);
    printf("%ld",b);
    return 0;


}