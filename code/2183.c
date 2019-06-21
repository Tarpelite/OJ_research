#include <stdio.h>

int is_prime(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            break;
    }
    return n % i;
}

int main() {
    int n;
    scanf("%d", &n);
    for (n++; !is_prime(n); n++);
    printf("%d\n", n);
    return 0;
}