#include<stdio.h>
long long dd(long long m)
{
    long long i,a=1;

    for(i=1;i<m+1;i++)
    {
        a=a*i;
    }
    return a;
}
int main()
{
    long long m,n,out;
    scanf("%lld%lld",&m,&n);
 if(n==0)
 {
     out=0;
 }
   else
   {out=dd(m)/(dd(n)*dd(m-n));}

    printf("%lld",out);
}