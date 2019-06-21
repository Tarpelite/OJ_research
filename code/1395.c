#include<stdio.h>
int C(int m, int n);
int main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    printf("%d",C(m,n));
    return 0;
}
int C(int m, int n)
{
    int c;
    if(n==m)
        c=1;
    else if(n==0)
        c=1;
    else if(n==1)
        c=m;
    else
        c=C(m-1,n)+C(m-1,n-1);
    return c;
}