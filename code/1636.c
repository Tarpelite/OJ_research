#include<stdio.h>
int main()
{
    int m,n;
scanf("%d%d",&m,&n);
printf("%d",gcd(m,n));
return 0;
}
int gcd(int m,int n)
{
    if(m==n||n==0)
        return 1;
    if(n==1)
        return m;
    return gcd(m-1,n)+gcd(m-1,n-1);
}