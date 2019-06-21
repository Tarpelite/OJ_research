#include <stdio.h>
typedef unsigned long long ull;
ull C(ull n,ull m)
{
    ull P = 1, Q = 1;
    int i;
    for (i = 1;i<=m;i++)
    {
        P *= (n - i + 1);
        Q *= i;
    }
    return P / Q;
}
int main()
{
    ull m,n;
    scanf("%llu%llu",&m,&n);
    printf("%llu\n",C(m,n));
	return 0;
}