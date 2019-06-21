#include<stdio.h>
int f(int);
int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while(f(n)!=1)
    {
        n=n+1;
    }
    printf("%d",n);
}
int f(int x)
{
    int i,k=1;
    for(i=2;i<x;i++)
    {
        k=k*(x%i!=0);
    }
    return k;
}