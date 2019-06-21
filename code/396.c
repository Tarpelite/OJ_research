#include<stdio.h>
int k(int,int);
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    printf("%d",k(m,n));
return 0;
}
int k(int m,int n)
{
    if(n==1)
        return m;
    if(m==n)
        return 1;
    return k(m-1,n-1)+k(m-1,n);
}