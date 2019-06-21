#include<stdio.h>
int j(int,int);
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    printf("%d",j(m,n));
return 0;
}
int j(int m,int n)
{
    if(n==1)
        return m;
    if(m==n)
        return 1;
    return j(m-1,n-1)+j(m-1,n);
}