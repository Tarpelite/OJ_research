#include<stdio.h>
int f(int,int);

int main()
{
    int m,n,x;
    scanf("%d%d",&m,&n);
    x=f(n,m);
    printf("%d",x);
    return 0;
}
int f(int n,int m)
 {
    if(n==0)
        return 1;
    else if(n==m)
        return 1;
    else
        return f(n,m-1)+f(n-1,m-1);
 }