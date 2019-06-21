#include <stdio.h>
unsigned long long C(int n,int m)
{
    if (n < m || n < 0 || m < 0)return 0;
    if (m == 0 || m == n || n == 0)return 1;
    switch (m)
    {
        case 1:return n;
        case 2:return n*(n-1) / 2;
        default:
            return C(n-1,m-1) + C(n-1,m);
    }
    
}
int main()
{
    int m,n;
    while(scanf("%d%d",&n,&m) != EOF)
    printf("%llu\n",C(n,m));
    return 0;
}