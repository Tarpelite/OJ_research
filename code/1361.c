#include <stdio.h>
#include <stdlib.h>
int a[10011], n;
int N(int l, int r) {
    int sum = 0;
    for(int i = l; i <= r; i++) {
        sum += a[i];
    }
    return sum % n;
}
int M(int l, int r) {
    int sum = 1;
    for(int i = l; i <= r; i++) {
        sum *= a[i];
        sum=sum%n;
    }
    return sum % n;
}
int H(int l, int r) {
    int x = a[l];
    for(int i = l + 1; i <= r; i++) {
        x ^= a[i];
    }
    return x;
}
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}
int main()
{
    int k,num[101],i,b;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    i=0;
    b=k;
    while(k--) {
        int l, r;
        scanf("%d%d", &l, &r);
        num[i]=H(min(N(l, r), M(l, r)), max(N(l, r), M(l,r)));
        i++;
    }
    for (i=0;i<b;i++)
        printf("%d\n",num[i]);
    return 0;
}