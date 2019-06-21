#include<stdio.h>

int main()
{
    int a,p;
    scanf("%d",&a);
    p=f(a);
    printf("%d",p);
    return 0;
}


int f(int n)
{
    int i,t=n+1;
    for(i=2;i<=n;i++)
    {
        if(t%i==0)
        {

            return f(t++);
        }
    }
    return t;
}