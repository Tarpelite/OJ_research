#include<stdio.h>
long f(long n)
{
    if(n<=1)
    {
        return 1;
    }
    else{return n*f(n-1);}
}
int main()
{
int m,n;
long k;
scanf("%d%d",&m,&n);
if(m==0||n==0)
{
    k=0;
    printf("%ld",k);
    return 0;
}
k=f(m)/(f(n)*f(m-n));
printf("%ld",k);
return 0;
}