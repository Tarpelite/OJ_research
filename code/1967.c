#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int a[10000010], b[10000010];

int main() {
    int i, j, z, k, t, top, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) { scanf("%d\n", &a[i]); }
    scanf("%d", &k);
    qsort(a, n, sizeof(a[0]), cmp);
    b[0] = a[0];
    z = 0;
    i = 0;
    while (i < n) {
        if (b[z] != a[i]) {
            b[z + 1] = a[i];
            z++;
            i++;
        }
        else { i++; }
    }
    t = b[z - k + 1];
    top = 0;
    for (i = 0; a[i] <= t; i++) {
        if (a[i] == t) {
            top = top + 1;
        }
    }
    printf("%d %d", t, top);
    return 0;
}