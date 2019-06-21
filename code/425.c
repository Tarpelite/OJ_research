#include <stdio.h>
#include <stdlib.h>
int zuhe(int n,int m)
{
    if (n == 0)
    {
        return 1;
    }
    else if (m == 0)
    {
        return 1;
    }
    else if (m <= n)
    {
        return 1;
    }
    return zuhe (n-1,m-1) + zuhe(n,m-1);
}
int main()
{
    int m,n,s;
    scanf("%d %d",&m,&n);
    s = zuhe(n,m);
    printf("%d",s);
    return 0;
}