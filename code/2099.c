#include <stdio.h>
int sumzuhe(int N, int K);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    printf("%d",sumzuhe(m,n));

    return 0;
}
int sumzuhe(int N, int K)
{
    if (K == 0)
        return 1;
    if (N == K)
        return 1;
    return sumzuhe(N - 1, K - 1) + sumzuhe(N - 1, K);
}