#include <stdio.h>
long long j(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return n*j(n-1);
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    long long y;
    y=j(m)/j(m-n)/j(n);
    printf("%d",y);
}