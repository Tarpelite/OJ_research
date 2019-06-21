#include <stdio.h>

int a[123];
int n, t;

int calc_n(int l, int r) {
    int sum = 0, i;
    for (i = l; i <= r; i++) {
        sum = (sum + a[i]) % n;
    }
    return sum;
}

int calc_m(int l, int r) {
    int ret = 1, i;
    for (i = l; i <= r; i++) {
        ret = ret * (a[i] % n) % n;
    }
    return ret;
}

int calc_res(int l, int r) {
    int res = 0, i;
    for (i = l; i <= r; i++) {
        res = res ^ a[i];
    }
    return res;
}

int main() {
    scanf("%d%d", &n, &t);
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", a + i);
    while (t--) {
        int l, r;
        scanf("%d%d", &l, &r);
        int N = calc_n(l, r);
        int M = calc_m(l, r);
        int min = N > M ? M : N;
        int max = M > N ? M : N;
        printf("%d\n", calc_res(min, max));
    }
    return 0;
}