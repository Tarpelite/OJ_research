#include <stdio.h>
long long C(int n,int m)
{
    long long P = 1, i;
    if (n - m < m) m = n - m;
    for (i = n;i>=n-m+1;i--)P *= (long long)i;
    for (i = 1;i<=m;i++)P /= (long long)i;
    return P;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%lld\n",C(m,n));
    return 0;
}