#include <stdio.h>
long long  f(int r);
long long t=1,o;
int main()
{
    int m,n,t;
    long long i,j,k;
    scanf("%d%d",&m,&n);
    if(m==0||n==0)
    {
        printf("0");
        goto aa;
    }
    k=f(m)/(f(m-n)*f(n));
    printf("%lld",k);
    aa: return 0;

}


long long f(int r)
{


    if(r==0)
    {
        return 1;
    }
    t*=r;
    if(r==1)
    {   o=t;
        t=1;
        return o;

    }
    else
        return f(r-1);
}