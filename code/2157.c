#include<stdio.h>
int f(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",f(m,n));
    return 0;
}
int f(int m,int n)
{if(n<1||m<1||m<n) return 0;
    if(n==1) return m;
    if(n==m) return 1;
    return f(m-1,n)+f(m-1,n-1);
}