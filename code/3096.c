#include<stdio.h>
int x(int);
int main()
{
    int n;
    scanf("%d",&n);
    n=n+1;
    while(x(n)!=1)
        n=n+1;
    printf("%d",n);
    return 0;
}
int x(int n)
{
    int i;
    int m;
    for(i=n-1;i>1;i--)
    {
        if(n%i==0)
        {
            m=0;
            break;
        }
        else
            m=1;
    }
        return m;
}