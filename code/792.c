#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int fac(int n);
    long long int m,n,p,q,z,r;
    scanf("%d%d",&m,&n);
    p=fac(m);
    q=fac(m-n);
    z=fac(n);
    r=p/(q*z);
    printf("%d",r);
    return 0;

}
long long int fac(int n)
{
    long long int a=1;
    int i;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}