#include <stdio.h>

int a[101234];

int main() {
    int n, x;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        a[x]++;
    }
    int k;
    scanf("%d", &k);
    for (i = 101233; i >= 0; i--) {
        //printf("%d\n", i, k);
        if (a[i]) k--;
        if (!k) break;
    }
    printf("%d %d\n", i, a[i]);
    return 0;
}