#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int kinds;
    kinds=sum(m,n);
    printf("%d",kinds);
    return 0;
}

int sum(int m,int n)
{
    if(m < n || m < 1 || n < 1)
        return 0;
    if(n == 1)
        return m;
    if(m == n)
        return 1;
    return sum(m-1,n)+sum(m-1,n-1);
}