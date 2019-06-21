#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define MAX_N 110
int a[MAX_N];
int n, K;
int N(int l, int r)
{
    int res = 0, i;
    for(i = l; i <= r; ++i) {
        res = (res % n + a[i] % n) % n;
    }
    return res;
}
int M(int l, int r)
{
    int res = 1, i;
    for(i = l; i <= r; ++i) {
        res = (res % n * a[i] % n) % n;
    }
    return res;
}
int H(int l, int r)
{
    int res = a[l], i;
    for (i = l + 1; i <= r; ++i) {
        res ^= a[i];
    }
    return res;
}
int main()
{
    scanf("%d%d", &n, &K);
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }
    while(K--) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", H(min(N(l, r), M(l, r)), max(N(l, r), M(l, r))));
    }
    return 0;
}