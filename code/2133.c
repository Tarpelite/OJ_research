#include <stdio.h>

int C(int n, int m) {
    if (m == n || m == 0)
        return 1;
    else
        return C(n - 1, m) + C(n - 1, m - 1);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", C(n, m));
    return 0;
}