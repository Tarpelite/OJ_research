#include <stdio.h>
long long C(int n,int m)
{
    if (n < m || n < 0 || m < 0)return 0;
    if (m == 0 || m == n || n == 0)return 1;
    switch (m)
    {
        case 1:return n;
        case 2:return n*(n-1) / 2;
        case 3:return n*(n-1)*(n-2) / 6;
        default:
            return C(n-1,m-1) + C(n-1,m);
    }
    
}
int main()
{
    int m,n;
    while(scanf("%d%d",&n,&m) != EOF)
    printf("%lld\n",C(n,m));
    return 0;
}