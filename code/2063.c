#include<stdio.h>
long long x(int n)
{
    int i;
    if(n==0)
    {
        return 1;
    }
    else
    {
        long long s = 1;
        for(i=1; i<n+1; i++)
        {
            s = s * i;
        }
        return s;
    }
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",x(m)/(x(n)*x(m-n)));
    return 0;
}