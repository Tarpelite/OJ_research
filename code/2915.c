#include<stdio.h>
long long int q(int n)
{
    long long int i,a;
    for(a=1,i=1;i<=n;i++)
        a*=i;
    return a;
}
int main()
{
    long long int m,n,a,b,c,i,d;
    scanf("%d%d",&m,&n);
    if(n==0)
        printf("1");
    else
    {
        a=q(m);
        b=q(m-n);
        c=q(n);
        d=a/(b*c);
        printf("%d",d);
    }
}