#include <stdio.h>
//typedef unsigned long long ull;
int C(int n,int m)
{
    int P = 1, Q = 1;
    int i;
    if (m >= n)return 1;
    for (i = 1;i<=m;i++)
    {
        P *= (n - i + 1);
        Q *= i;
    }
    return P / Q;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",C(m,n));
    return 0;
}