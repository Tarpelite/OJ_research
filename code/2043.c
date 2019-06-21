#include<stdio.h>
int main()
{
    long long int m,n,X,i;
    long long int a=1,b=1,c=1;
    scanf("%lld%lld",&m,&n);
       for(i=1;i<=m;i++)
       {a*=i;}
       for(i=1;i<=n;i++)
       {b*=i;}
       for(i=1;i<=m-n;i++)
       {c*=i;}
       X=a/(b*c);
       printf("%lld",X);
       return 0;
}